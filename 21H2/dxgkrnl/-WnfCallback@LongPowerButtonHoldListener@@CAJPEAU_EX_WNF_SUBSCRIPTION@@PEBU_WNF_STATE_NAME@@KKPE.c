/*
 * XREFs of ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C00509B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall LongPowerButtonHoldListener::WnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        __int64 a4,
        const struct _WNF_TYPE_ID *a5,
        char *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  signed int v8; // eax
  _BYTE OutputBuffer[4]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+34h] [rbp-4Ch] BYREF
  int v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]

  if ( *a2 == WNF_PO_POWER_BUTTON_STATE )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(a6 + 24), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v6 = *(_QWORD *)a6;
    v13 = 0LL;
    v12 = 0;
    v11 = 8;
    if ( (int)ExQueryWnfStateData(v6, &v12, &v13, &v11) >= 0 && v11 == 8 )
    {
      v8 = (unsigned int)v13 >> 1;
      if ( (v13 & 1) != 0 )
      {
        if ( v8 < *((_DWORD *)a6 + 3) || a6[8] )
        {
          if ( v8 >= *((_DWORD *)a6 + 4) && !a6[9] )
          {
            OutputBuffer[0] = 0;
            InputBuffer = 49LL;
            if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, OutputBuffer, 1u) < 0
              || !OutputBuffer[0] )
            {
              v17 = 0LL;
              v18 = 0;
              v20 = 0LL;
              v16 = 16;
              v19 = 2LL;
              SMgrGdiCallout(&v16, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
              a6[9] = 1;
            }
          }
        }
        else
        {
          v17 = 0LL;
          v18 = 0;
          v20 = 0LL;
          v16 = 16;
          v19 = 1LL;
          SMgrGdiCallout(&v16, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
          a6[8] = 1;
        }
      }
      else
      {
        *((_WORD *)a6 + 4) = 0;
      }
    }
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v7);
  }
  return 0LL;
}

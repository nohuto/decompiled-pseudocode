/*
 * XREFs of RIMGetDeviceButtons @ 0x1C016026C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C0164414 (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     RIMPbuttonToCursor @ 0x1C0161B2C (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0165B94 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMValidatePTPButtons @ 0x1C01824A0 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v10; // r15d
  unsigned __int16 v11; // si
  __int64 v12; // r14
  __int64 v13; // rcx
  int SpecificButtonCaps; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rax
  unsigned int v24; // r10d
  void *v25; // rax
  bool v26; // zf
  unsigned int i; // r8d
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax
  int v34; // [rsp+88h] [rbp+48h]
  int v35; // [rsp+98h] [rbp+58h]
  int v36; // [rsp+9Ch] [rbp+5Ch]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v11 = 0;
  v34 = 0;
  if ( *(_DWORD *)(a2 + 984) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 728);
  if ( (_DWORD)v5 )
    v12 = Win32AllocPool(72 * v5, 0x65687352u);
  else
    v12 = 0LL;
  if ( v12 )
  {
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v11, 0, v12, (__int64)&a5, a3);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_41:
      Win32FreePool(v12);
      goto LABEL_43;
    }
    v17 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, 0LL, v15, v16);
      v17 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v25 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 720), 2019849042LL);
      *(_QWORD *)(a2 + 968) = v25;
      if ( v25 )
      {
        v26 = *(_DWORD *)(a2 + 24) == 7;
        *(_DWORD *)(a2 + 980) = *(_DWORD *)(a2 + 720);
        if ( v26 )
          SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
        if ( SpecificButtonCaps >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 980); *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v29) = 1 )
          {
            ++*(_DWORD *)(a1 + 528);
            v28 = i++;
            v29 = 3 * v28;
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v29 + 4) = *(_DWORD *)(a1 + 528);
          }
        }
        goto LABEL_40;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 980) = 0;
      v18 = Win32AllocPoolZInit(12LL * v17, 2019849042LL);
      *(_QWORD *)(a2 + 968) = v18;
      if ( v18 )
      {
        v21 = 0LL;
        if ( a5 )
        {
          v20 = 1LL;
          do
          {
            if ( v10 >= 2 )
              break;
            v19 = 9LL * (unsigned int)v21;
            if ( *(_WORD *)(v12 + 72LL * (unsigned int)v21) == 13 )
            {
              v22 = *(_WORD *)(v12 + 72LL * (unsigned int)v21 + 56);
              if ( v22 == 66 )
              {
                v34 = 1;
              }
              else if ( v22 != 69 && v22 != 60 || v10 && *(_WORD *)(v12 + 72LL * (v10 - 1) + 56) != 66 )
              {
                goto LABEL_26;
              }
              v19 = (unsigned int)++*(_DWORD *)(a1 + 528);
              v23 = v10++;
              ++*(_DWORD *)(a2 + 980);
              *(&v35 + v23) = v19;
            }
LABEL_26:
            v21 = (unsigned int)(v21 + 1);
          }
          while ( (unsigned int)v21 < a5 );
        }
        if ( *(_DWORD *)(a2 + 980) > a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21, v20, 66LL);
        if ( v34 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4LL) = v35;
          **(_DWORD **)(a2 + 968) = RIMPbuttonToCursor(66LL);
          if ( v10 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 16LL) = v36;
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 12LL) = RIMPbuttonToCursor(v24);
          }
          goto LABEL_40;
        }
      }
    }
    SpecificButtonCaps = -1073741668;
LABEL_40:
    v30 = a5;
    *(_DWORD *)(a2 + 336) += a5;
    *(_DWORD *)(a2 + 984) = v30;
    goto LABEL_41;
  }
  SpecificButtonCaps = -1073741668;
LABEL_43:
  v31 = *(_DWORD *)(a2 + 984);
  if ( !v31 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v32 = Win32AllocPool(2LL * v31, 0x65687352u);
    *(_QWORD *)(a2 + 768) = v32;
    if ( !v32 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}

/*
 * XREFs of RIMGetDeviceButtons @ 0x1C01665BC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C016A764 (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     RIMPbuttonToCursor @ 0x1C0167E7C (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C016BEE4 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMValidatePTPButtons @ 0x1C01881A0 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v10; // r15d
  unsigned __int16 v11; // si
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  int SpecificButtonCaps; // edi
  __int64 i; // r8
  unsigned int v17; // edx
  void *v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r10d
  void *v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  int v31; // [rsp+88h] [rbp+48h]
  int v32; // [rsp+98h] [rbp+58h]
  int v33; // [rsp+9Ch] [rbp+5Ch]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v11 = 0;
  v31 = 0;
  if ( *(_DWORD *)(a2 + 984) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
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
      Win32FreePool(v12, v13, i);
      goto LABEL_43;
    }
    v17 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
      v17 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v24 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 720), 0x78647352u);
      *(_QWORD *)(a2 + 968) = v24;
      if ( v24 )
      {
        v25 = *(_DWORD *)(a2 + 24) == 7;
        *(_DWORD *)(a2 + 980) = *(_DWORD *)(a2 + 720);
        if ( v25 )
          SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
        if ( SpecificButtonCaps >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 980); *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v13) = 1 )
          {
            ++*(_DWORD *)(a1 + 528);
            v26 = (unsigned int)i;
            i = (unsigned int)(i + 1);
            v13 = 3 * v26;
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4 * v13 + 4) = *(_DWORD *)(a1 + 528);
          }
        }
        goto LABEL_40;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 980) = 0;
      v18 = Win32AllocPoolZInit(12LL * v17, 0x78647352u);
      *(_QWORD *)(a2 + 968) = v18;
      if ( v18 )
      {
        v13 = 0LL;
        if ( a5 )
        {
          i = 1LL;
          do
          {
            if ( v10 >= 2 )
              break;
            v19 = 9LL * (unsigned int)v13;
            if ( *(_WORD *)(v12 + 72LL * (unsigned int)v13) == 13 )
            {
              v20 = *(_WORD *)(v12 + 72LL * (unsigned int)v13 + 56);
              if ( v20 == 66 )
              {
                v31 = 1;
              }
              else if ( v20 != 69 && v20 != 60 || v10 && *(_WORD *)(v12 + 72LL * (v10 - 1) + 56) != 66 )
              {
                goto LABEL_26;
              }
              v19 = (unsigned int)++*(_DWORD *)(a1 + 528);
              v21 = v10++;
              ++*(_DWORD *)(a2 + 980);
              *(&v32 + v21) = v19;
            }
LABEL_26:
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < a5 );
        }
        if ( *(_DWORD *)(a2 + 980) > a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
        if ( v31 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4LL) = v32;
          v22 = RIMPbuttonToCursor(66LL);
          v13 = *(_QWORD *)(a2 + 968);
          *(_DWORD *)v13 = v22;
          if ( v10 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 16LL) = v33;
            *(_DWORD *)(*(_QWORD *)(a2 + 968) + 12LL) = RIMPbuttonToCursor(v23);
          }
          goto LABEL_40;
        }
      }
    }
    SpecificButtonCaps = -1073741668;
LABEL_40:
    v27 = a5;
    *(_DWORD *)(a2 + 336) += a5;
    *(_DWORD *)(a2 + 984) = v27;
    goto LABEL_41;
  }
  SpecificButtonCaps = -1073741668;
LABEL_43:
  v28 = *(_DWORD *)(a2 + 984);
  if ( !v28 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v29 = Win32AllocPool(2LL * v28, 0x65687352u);
    *(_QWORD *)(a2 + 768) = v29;
    if ( !v29 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}

/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x14036F050 (PnpDuplicateUnicodeString.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050E318 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14050E674 (PiDevCfgPushDriverNodeEntry.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A4DEC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8 (PiDevCfgQueryIncludedDriverNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // r12d
  _QWORD **v3; // rcx
  int DriverConfiguration; // ebx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  __int64 v8; // rdi
  wchar_t *v9; // rsi
  wchar_t *v10; // r14
  wchar_t *v11; // rdi
  wchar_t *v12; // rax
  const wchar_t *v13; // r13
  bool v14; // cf
  int v15; // eax
  wchar_t *v16; // rax
  int v17; // r8d
  wchar_t *v18; // rax
  wchar_t *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 *v22; // rdi
  wchar_t *v23; // r15
  __int64 *v24; // r12
  int v25; // eax
  __int64 *v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  const wchar_t *v31; // [rsp+30h] [rbp-38h]
  __int64 v32; // [rsp+38h] [rbp-30h]
  _QWORD *v33; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+B8h] [rbp+50h]
  __int64 *v38; // [rsp+C0h] [rbp+58h] BYREF
  wchar_t *Str2; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  v2 = 0;
  v33 = &v33;
  v3 = &v33;
  DestinationString = 0LL;
  P = &v33;
  if ( *(_QWORD *)(v1 + 360) )
  {
    DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v33, v1);
    if ( DriverConfiguration < 0 )
      goto LABEL_61;
    do
    {
LABEL_6:
      if ( v33 == &v33 )
        return (unsigned int)DriverConfiguration;
      v6 = P;
      if ( *(_QWORD ***)P != &v33 || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
LABEL_64:
        __fastfail(3u);
      P = (PVOID)*((_QWORD *)P + 1);
      *v7 = &v33;
      v8 = v6[2];
      v32 = v8;
      ExFreePoolWithTag(v6, 0);
      v9 = *(wchar_t **)(v8 + 360);
    }
    while ( !v9 );
    while ( 1 )
    {
      if ( !*v9 )
      {
LABEL_58:
        if ( DriverConfiguration < 0 )
          goto LABEL_61;
        goto LABEL_6;
      }
      v10 = v9;
      v11 = v9;
      v12 = wcschr(v9, 0x3Au);
      if ( v12 )
      {
        v13 = v12 + 1;
        *v12 = 0;
        v31 = v12 + 1;
        v9 = v12 + 1;
        v14 = *v11 < 0x2Au;
        if ( *v11 != 42 || (v14 = 0, v11[1]) )
          v15 = v14 ? -1 : 1;
        else
          v15 = 0;
        Str2 = (wchar_t *)((unsigned __int64)v10 & -(__int64)(v15 != 0));
        v16 = wcsrchr(v13, 0x2Eu);
        if ( v16 )
        {
          *v16 = 0;
          v9 = v16 + 1;
          v17 = v16[1] - 42;
          if ( v16[1] == 42 )
            v17 = v16[2];
          if ( v17 )
          {
            v37 = 0;
            v9 = v16 + 1;
            if ( v16[1] )
            {
              do
              {
                v18 = wcschr(v9, 0x2Cu);
                if ( v18 )
                {
                  *v18 = 0;
                  v19 = v18 + 1;
                }
                else
                {
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( v9[v20] );
                  v19 = &v9[v20];
                }
                v2 |= PiDevCfgGetDriverConfigurationKeyScope(v9);
                v9 = v19;
              }
              while ( *v19 );
              v37 = v2;
            }
            v2 = 0;
          }
          else
          {
            v37 = -1;
          }
          v38 = 0LL;
          RtlInitUnicodeString(&DestinationString, v13);
          v21 = v1 + 368;
          v22 = *(__int64 **)(v1 + 368);
          if ( v22 != (__int64 *)(v1 + 368) )
          {
            v23 = Str2;
            do
            {
              v38 = v22;
              if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v22 + 11), &DestinationString, 1u) )
              {
                v24 = v22;
                if ( !v23 || !wcsicmp((const wchar_t *)v22[6], v23) )
                  break;
              }
              v22 = (__int64 *)*v22;
              v24 = 0LL;
              v38 = 0LL;
            }
            while ( v22 != (__int64 *)v21 );
            v1 = a1;
            v13 = v31;
            if ( v24 )
            {
              v2 = 0;
              goto LABEL_52;
            }
            v2 = 0;
          }
          v25 = PiDevCfgQueryIncludedDriverNode(v32, Str2, v13, v37, &v38);
          DriverConfiguration = v25;
          if ( v25 < 0 )
          {
            *(_DWORD *)(v1 + 412) = v25;
            goto LABEL_58;
          }
          v26 = *(__int64 **)(v21 + 8);
          if ( *v26 != v21 )
            goto LABEL_64;
          v27 = v38;
          v28 = (__int64)v38;
          *v38 = v21;
          *(_QWORD *)(v28 + 8) = v26;
          *v26 = v28;
          *(_QWORD *)(v21 + 8) = v28;
          DriverConfiguration = PiDevCfgQueryDriverConfiguration(v28);
          if ( DriverConfiguration < 0 )
            goto LABEL_61;
          if ( v27[37] && !*(_QWORD *)(v1 + 296) && !PnpDuplicateUnicodeString(v1 + 288, (__int64)(v27 + 36)) )
          {
            DriverConfiguration = -1073741670;
            goto LABEL_58;
          }
          if ( v27[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304));
            if ( DriverConfiguration < 0 )
              goto LABEL_61;
          }
          if ( v27[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 320));
            if ( DriverConfiguration < 0 )
              goto LABEL_61;
          }
          DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v33, (__int64)v27);
          if ( DriverConfiguration < 0 )
            goto LABEL_61;
        }
      }
LABEL_52:
      v29 = -1LL;
      do
        ++v29;
      while ( v9[v29] );
      v9 += v29 + 1;
    }
  }
  DriverConfiguration = 0;
  while ( v33 != &v33 )
  {
    if ( *v3 != &v33 )
      goto LABEL_64;
    v30 = v3[1];
    if ( (_QWORD **)*v30 != v3 )
      goto LABEL_64;
    P = v3[1];
    *v30 = &v33;
    ExFreePoolWithTag(v3, 0);
LABEL_61:
    v3 = (_QWORD **)P;
  }
  return (unsigned int)DriverConfiguration;
}

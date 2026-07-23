/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x1409BF34C
 * Callers:
 *     ViThunkSnapSharedExports @ 0x1409BF29C (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x140360D70 (VfIsVerifierEnabled.c)
 *     _stricmp @ 0x1403CE7D0 (_stricmp.c)
 *     ViThunkFindAPIContextByName @ 0x1409D5FFC (ViThunkFindAPIContextByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int *v8; // rax
  unsigned int *v9; // rsi
  const char *v10; // rbp
  __int64 *v12; // r14
  char *v13; // rbp
  char v14; // si
  char *v15; // rcx
  int v16; // ecx
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h]

  v4 = 0;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, &Size);
  v9 = v8;
  if ( v8 && v8[3] )
  {
    do
    {
      if ( !*v9 )
        break;
      v10 = &a1[v9[3]];
      if ( !stricmp(v10, "ntoskrnl.exe") || !stricmp(v10, "hal.dll") )
      {
        v12 = (__int64 *)&a1[*v9];
        v13 = &a1[v9[4]];
        while ( *v12 )
        {
          if ( *v12 >= 0 && !stricmp(&a1[*v12 + 2], *(const char **)a2) )
          {
            *(_QWORD *)a4 = v13;
            *(_QWORD *)(a4 + 8) = *(_QWORD *)(a2 + 8);
            v14 = BYTE4(VfRuleClasses);
            if ( (VfRuleClasses & 0x800000000LL) == 0
              || (unsigned int)VfIsVerifierEnabled()
              && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (v14 & 2) != 0 || (v14 & 4) != 0) )
            {
              *(_DWORD *)(a4 + 24) |= 1u;
            }
            else if ( XdvEnabled )
            {
              if ( VfDifAPIThunkContextHead )
              {
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(a2 + 32);
                v15 = *(char **)a2;
                v18 = 0LL;
                ViThunkFindAPIContextByName(v15);
                if ( v18 )
                {
                  v16 = *(_DWORD *)(a4 + 24) | 1;
                  *(_DWORD *)(a4 + 24) = v16;
                  if ( (*(_DWORD *)(a2 + 24) & 4) != 0 )
                    *(_DWORD *)(a4 + 24) = v16 | 4;
                }
              }
            }
            return 1;
          }
          ++v12;
          v13 += 8;
        }
      }
      v9 += 5;
    }
    while ( v9[3] );
  }
  return v4;
}

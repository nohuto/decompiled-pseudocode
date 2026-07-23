/*
 * XREFs of EtwpApplyTransientFilters @ 0x1406BCE64
 * Callers:
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1406BB1FC (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x140940984 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpApplyTransientFilters(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v12; // rcx
  unsigned int v13; // edx

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    v9 = 0;
    if ( !*a4 || (v4 = EtwpApplyExeFilter(a1, *a4)) != 0 )
    {
      v10 = a4[1];
      if ( v10 || a4[2] )
        v4 = EtwpApplyPackageIdFilter(a1, v10, a4[2]);
      if ( v4 )
      {
        if ( a3 )
        {
          v4 = 0;
          v12 = (_DWORD *)(a2 + *(_QWORD *)a3);
          v13 = *(_DWORD *)(a3 + 8) >> 2;
          if ( v13 )
          {
            while ( *v12 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL) )
            {
              ++v9;
              ++v12;
              if ( v9 >= v13 )
                return v4;
            }
            return 1;
          }
        }
      }
    }
  }
  return v4;
}

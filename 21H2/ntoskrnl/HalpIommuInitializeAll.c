/*
 * XREFs of HalpIommuInitializeAll @ 0x14099C3D4
 * Callers:
 *     HalpInterruptReinitialize @ 0x140996D78 (HalpInterruptReinitialize.c)
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     HalpInterruptIsRemappingRequired @ 0x140378B8C (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuUpdatePageTableLevel @ 0x1403A7414 (HalpIommuUpdatePageTableLevel.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x1403A7444 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CFA20 (HalpIommuPopulateExceptionList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBEC0 (HalpIommuConfigureInterrupt.c)
 *     HalpGetIrtEntryCount @ 0x1404D17A8 (HalpGetIrtEntryCount.c)
 *     HalpIommuConstructReservedPageTables @ 0x1409A84F0 (HalpIommuConstructReservedPageTables.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int i; // esi
  __int64 *v6; // r14
  __int64 result; // rax
  __int64 *v8; // rdi
  __int64 v9; // r12
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v12; // ebx
  __int64 Memory; // rax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // edx
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v20 = 0LL;
  v3 = a2;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( HalpHvIommu )
    return 0LL;
  if ( IommuRemappingPolicy && (__int64 *)HalpIommuList == &HalpIommuList )
    return 3221225659LL;
  for ( i = 0; i < 3; ++i )
  {
    v6 = (__int64 *)HalpIommuList;
    while ( v6 != &HalpIommuList )
    {
      v8 = v6;
      v9 = (__int64)v6;
      v6 = (__int64 *)*v6;
      v10 = *((_DWORD *)v8 + 114);
      if ( (v10 & 0x40) == 0 && IommuRemappingPolicy )
        return 3221225659LL;
      v11 = (v10 >> 5) & 1;
      if ( (v10 & 0x100) == 0 )
        goto LABEL_26;
      if ( !i && !a1 )
      {
        v12 = *((_DWORD *)v8 + 106);
        if ( v12 > 0x10000 )
          v12 = 0x10000;
        Memory = HalpMmAllocateMemory(4 * ((v12 + 32) >> 5));
        *((_DWORD *)v8 + 110) = v12;
        v8[56] = Memory;
        RtlClearAllBits((PRTL_BITMAP)(v8 + 55));
        v8[54] = 0LL;
      }
      if ( HalpIommuPolicy == 3 )
      {
        v11 = 2;
LABEL_28:
        if ( !i )
        {
          if ( !a1 )
          {
            v14 = v8[66];
            if ( v14 && (v15 = *((_DWORD *)v8 + 114), (v15 & 0x100) != 0) )
            {
              if ( (int)HalpIommuConstructReservedPageTables(v3, v14, ((v15 >> 12) & 7) + 1) < 0 )
                return 3221225473LL;
              v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v8[42])(
                      v8[2],
                      *(unsigned int *)v8[66],
                      v8[66] + 8);
            }
            else
            {
              v16 = 0;
            }
            if ( v16 < 0 )
              return 3221225473LL;
          }
          *(_QWORD *)&v19 = 0LL;
          HIDWORD(v20) = 0;
          *((_QWORD *)&v19 + 1) = __PAIR64__(IommuRemappingPolicy, v11);
          LODWORD(v20) = HalpGetIrtEntryCount();
          if ( ((int (__fastcall *)(__int64, __int128 *))v8[7])(v8[2], &v19) < 0 )
            return 3221225473LL;
        }
        if ( i >= 2 )
        {
          if ( v8[36] )
          {
            if ( a1 )
            {
              if ( (v8[45] & 2) != 0 )
              {
                LOBYTE(a2) = 1;
                result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v8[33])(
                           v8[2],
                           a2,
                           v8[60],
                           *((unsigned int *)v8 + 122));
              }
              else
              {
                result = 0LL;
              }
              if ( (int)result < 0 )
                return result;
              ((void (__fastcall *)(__int64))v8[34])(v8[2]);
            }
            else
            {
              *((_QWORD *)&v18 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
              *(_QWORD *)&v18 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
              if ( !HalpInterruptIsRemappingRequired() || (v17 = 6, (v8[57] & 0x10) != 0) )
                v17 = 1073741822;
              HalpIommuConfigureInterrupt(v9, v17, &v18);
            }
          }
        }
        else
        {
          LOBYTE(a3) = a1;
          result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v8[8])(v8[2], i, a3);
          if ( (int)result < 0 )
            return result;
        }
      }
      else
      {
        v11 = 1;
LABEL_26:
        if ( v11 || IommuRemappingPolicy )
          goto LABEL_28;
      }
    }
  }
  HalpIommuUpdatePageWalkCapability();
  HalpIommuUpdatePageTableLevel();
  return 0LL;
}

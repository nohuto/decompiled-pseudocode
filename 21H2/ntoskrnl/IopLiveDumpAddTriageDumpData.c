/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x1409AC1B0
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AD988 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     KiValidateTriageDumpDataArray @ 0x1403CA32C (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517DD8 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x140518D80 (KiValidateComponentName.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

char __fastcall IopLiveDumpAddTriageDumpData(int *a1, __int64 (__fastcall **a2)(_QWORD, __int64, __int64))
{
  PVOID *v2; // rbx
  char result; // al
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+B0h] [rbp+40h] BYREF
  PVOID *v17; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (PVOID *)KeBugCheckReasonCallbackListHead;
  result = 0;
  v16 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( KeBugCheckReasonCallbackListHead && qword_140C32128 )
  {
    v17 = &KeBugCheckReasonCallbackListHead;
    while ( v2 != &KeBugCheckReasonCallbackListHead )
    {
      result = KeValidateBugCheckCallbackRecord((__int64)v2, 7, &v17);
      if ( result )
      {
        v6 = *a1;
        *(_QWORD *)&v12 = 0LL;
        LODWORD(v13) = v6;
        *((_QWORD *)&v13 + 1) = *((_QWORD *)a1 + 1);
        v14 = *((_OWORD *)a1 + 1);
        v15 = *((_QWORD *)a1 + 4);
        HIDWORD(v12) = 0x2000000;
        result = ((__int64 (__fastcall *)(__int64, PVOID *, __int128 *))v2[2])(7LL, v2, &v12);
        if ( (_QWORD)v12 )
        {
          result = KiValidateTriageDumpDataArray(v12, v7, 0x2000000u);
          if ( result )
          {
            result = KiValidateComponentName((__int64)v2[3], &v16);
            if ( result )
            {
              result = v12;
              if ( *(_DWORD *)(v12 + 16) )
              {
                result = MmAddRangeToCrashDump(a2, (unsigned __int64)v2[3], v16 + 1LL);
                v8 = v12;
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 16); i = (unsigned int)(i + 1) )
                {
                  result = 2 * (i + 3);
                  v10 = *(_QWORD *)(v8 + 16 * (i + 3));
                  if ( v10 )
                  {
                    v11 = *(_QWORD *)(v8 + 16LL * (unsigned int)i + 56);
                    if ( v11 )
                    {
                      result = MmAddRangeToCrashDump(a2, v10, v11);
                      v8 = v12;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( !v17 )
      {
        return result;
      }
      v2 = (PVOID *)*v2;
    }
  }
  return result;
}

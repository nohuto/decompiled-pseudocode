/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14051882C
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 * Callees:
 *     KiValidateTriageDumpDataArray @ 0x1403CA32C (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517DD8 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x140518D80 (KiValidateComponentName.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  __int64 v0; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdx
  __int64 *v3; // rdx
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+40h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+60h] [rbp-28h]
  PVOID *v9; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v10; // [rsp+A0h] [rbp+18h]
  PVOID *v11; // [rsp+A8h] [rbp+20h]

  LOBYTE(v0) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v11 = &KeBugCheckReasonCallbackListHead;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140C32128 )
  {
    v9 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v10 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      LOBYTE(v0) = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v9);
      if ( (_BYTE)v0 )
      {
        *(_QWORD *)&v5 = 0LL;
        *((_QWORD *)&v5 + 1) = 0x200000000000001LL;
        LODWORD(v6) = KiBugCheckData;
        *((_QWORD *)&v6 + 1) = *((_QWORD *)&KiBugCheckData + 1);
        v7 = xmmword_140C31530;
        v8 = qword_140C31540;
        LOBYTE(v0) = ((__int64 (__fastcall *)(__int64, PVOID *, __int128 *))v1[2])(7LL, v1, &v5);
        if ( (_QWORD)v5
          && (LOBYTE(v0) = KiValidateTriageDumpDataArray(v5, v2, 0x2000000u), (_BYTE)v0)
          && (LOBYTE(v0) = KiValidateComponentName((STRSAFE_PCNZCH)v1[3]), (_BYTE)v0) )
        {
          *(_QWORD *)(v5 + 40) = v1[3];
          *(_DWORD *)(v5 + 32) = 1;
          v0 = v5;
          v3 = (__int64 *)qword_140C32118;
          if ( *(__int64 **)qword_140C32118 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v5 = &KeBugCheckTriageDumpDataArrayListHead;
          *(_QWORD *)(v0 + 8) = v3;
          *v3 = v0;
          qword_140C32118 = v0;
          *((_BYTE *)v1 + 44) = 3;
        }
        else
        {
          *((_BYTE *)v1 + 44) = 4;
        }
      }
      else if ( !v9 )
      {
        return v0;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return v0;
}

/*
 * XREFs of RtlpTpIoDllProcessUnloads @ 0x180113548
 * Callers:
 *     RtlpTpIoDllUnloaded @ 0x18011362C (RtlpTpIoDllUnloaded.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     RtlDuplicateUnicodeString @ 0x180079E70 (RtlDuplicateUnicodeString.c)
 */

void __fastcall RtlpTpIoDllProcessUnloads(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r8d
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // edx

  for ( i = a2; ; i = *(_QWORD *)(i + 96) - 96LL )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(i + 120);
      if ( (v5 & 2) == 0 )
      {
        v6 = *(_QWORD *)(i + 104);
        v7 = 2;
        goto LABEL_6;
      }
      if ( (v5 & 4) != 0 )
        break;
      v6 = *(_QWORD *)(i + 112);
      v7 = 4;
LABEL_6:
      v8 = v7 | v5;
      v9 = v6 - 96;
      *(_DWORD *)(i + 120) = v8;
      if ( !v6 )
        v9 = i;
      i = v9;
    }
    v10 = *(_DWORD *)(i + 120);
    if ( *(_QWORD *)(a1 + 24) <= *(_QWORD *)i
      && *(_QWORD *)i < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v11 = *(_QWORD *)(i + 80);
      v12 = -*(_DWORD *)(i + 88);
      *(_DWORD *)(i + 120) = v5 | 1;
      TpAdjustBindingCount(v11, v12);
      *(_QWORD *)(i + 64) = 0LL;
      *(_QWORD *)(i + 144) = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(i + 152) = *(_DWORD *)(a1 + 32);
      RtlDuplicateUnicodeString(1u, *(PUNICODE_STRING *)(a1 + 8), (PUNICODE_STRING)(i + 128));
      v10 = *(_DWORD *)(i + 120);
    }
    *(_DWORD *)(i + 120) = v10 & 0xFFFFFFF9;
    if ( i == a2 )
      break;
  }
}

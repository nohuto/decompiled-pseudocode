/*
 * XREFs of CmpKeyEnumStackCreateResumeContext @ 0x14087A944
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1405F8DC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpKeyEnumStackCreateResumeContext(
        __int64 a1,
        __int64 a2,
        int a3,
        struct _LOOKASIDE_LIST_EX *a4,
        _QWORD *a5)
{
  int v5; // r15d
  unsigned int v7; // esi
  char v8; // bp
  SIZE_T v10; // rdx
  char *TransientPoolWithTag; // rax
  char *v12; // rdi
  __int16 v13; // bp
  __int64 v14; // rsi
  _QWORD *v15; // r14
  unsigned __int64 EntryAtLayerHeight; // r12
  __int16 v17; // dx
  __int64 KcbAtLayerHeight; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r12

  v5 = *(__int16 *)(a1 + 2);
  v7 = 0;
  v8 = (char)a4;
  v10 = 24LL * (v5 + 1) + 8;
  if ( (_BYTE)a4 )
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x36374D43u, a4);
  else
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x37374D43u, a4);
  v12 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 24LL * (v5 + 1) + 8);
    v12[2] = v8;
    v13 = 0;
    *((_DWORD *)v12 + 1) = a3;
    *(_WORD *)v12 = v5;
    if ( (v5 & 0x8000u) == 0 )
    {
      v14 = a2;
      v15 = v12 + 8;
      do
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v14, v13);
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v17);
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)KcbAtLayerHeight);
        v19 = v15 + 2;
        v20 = 2LL;
        v15[1] = KcbAtLayerHeight;
        v21 = EntryAtLayerHeight - (_QWORD)v15;
        *v15 = *(_QWORD *)(KcbAtLayerHeight + 304);
        do
        {
          *v19 = *(_DWORD *)((char *)v19 + v21 + 8);
          ++v19;
          --v20;
        }
        while ( v20 );
        ++v13;
        v15 += 3;
        v14 = a2;
      }
      while ( v13 <= (__int16)v5 );
      v7 = 0;
    }
    *a5 = v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}

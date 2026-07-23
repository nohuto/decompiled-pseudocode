/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x14087F43C
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x14087F36C (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpDuplicateIndex @ 0x14087A510 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x14087AFE8 (CmpMarkEntireIndexDirty.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // esi
  _DWORD *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v13 = 0xFFFFFFFFLL;
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v13);
  if ( !v6 )
    return (unsigned int)-1073741670;
  v7 = 0;
  v8 = (_DWORD *)(a3 + 12);
  v9 = v6 - a3;
  while ( 1 )
  {
    v10 = *(_DWORD *)((char *)v8 + v9 + 16);
    if ( v10 == -1 )
      goto LABEL_8;
    if ( !CmpMarkEntireIndexDirty(BugCheckParameter2, v10) )
      break;
    v11 = CmpDuplicateIndex(BugCheckParameter2, v10, v7);
    *v8 = v11;
    if ( v11 == -1 )
    {
      v4 = -1073741670;
      goto LABEL_12;
    }
    *(v8 - 2) = *(_DWORD *)((char *)v8 + v9 + 8);
LABEL_8:
    ++v7;
    ++v8;
    if ( v7 >= 2 )
      goto LABEL_12;
  }
  v4 = -1073741443;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
  return v4;
}

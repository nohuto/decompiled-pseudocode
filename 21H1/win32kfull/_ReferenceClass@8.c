/*
 * XREFs of _ReferenceClass@8 @ 0x9D9BA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?ClassAllocString@@YGPAXQAUtagDESKTOP@@KK@Z @ 0x474CE (-ClassAllocString@@YGPAXQAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PAX@Z @ 0x474F0 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCL.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YGEPAUtagCLS@@@Z @ 0x47532 (--$InitLookAsideRef@UtagCLS@@@@YGEPAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z @ 0x4756E (-ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QAEPADPAD@Z @ 0x475E6 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QAEPADPAD@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8 (-ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAD@Z @ 0x479F2 (-ClassFree@@YGXPAUtagDESKTOP@@PAD@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z @ 0x9DB5C (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z.c)
 *     ??4?$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z @ 0xACF20 (--4-$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge ReferenceClass@<eax>(unsigned int a1@<ebx>, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // ebx
  struct tagDESKTOP *v9; // kr00_4
  int v10; // esi
  PVOID v11; // eax
  PVOID v12; // ecx
  signed int v13; // ecx
  unsigned int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  _WORD *v20; // edx
  __int16 v21; // ax
  int v22; // eax
  int v23; // ecx
  const void *v24; // [esp-Ch] [ebp-24h]
  unsigned int v25; // [esp-4h] [ebp-1Ch]
  unsigned int v26; // [esp+0h] [ebp-18h]
  unsigned int v27; // [esp+0h] [ebp-18h]
  _DWORD *v28; // [esp+Ch] [ebp-Ch]
  int v29; // [esp+10h] [ebp-8h]

  v3 = a2;
  v29 = 0;
  v4 = *(_DWORD *)(a3 + 12);
  if ( *(_DWORD *)(a2 + 20) == v4 )
  {
    ++*(_DWORD *)(a2 + 40);
    return 1;
  }
  v6 = *(_DWORD **)(a2 + 36);
  if ( v6 )
  {
    do
    {
      if ( v6[5] == v4 )
        break;
      v6 = (_DWORD *)*v6;
    }
    while ( v6 );
    if ( v6 )
      goto LABEL_16;
  }
  v7 = ClassAlloc(
         (*(_WORD *)(*(_DWORD *)(a2 + 4) + 6) & 8) + *(_DWORD *)(*(_DWORD *)(a2 + 4) + 12) + 56,
         v4,
         *(struct tagDESKTOP **)(*(_DWORD *)(a2 + 4) + 12),
         a1,
         v26);
  v8 = (_DWORD *)v7;
  v28 = (_DWORD *)v7;
  if ( v7 )
  {
    qmemcpy((void *)(v7 + 18), (const void *)(a2 + 18), 0x2Au);
    memcpy(
      *(void **)(v7 + 4),
      *(const void **)(a2 + 4),
      *(_DWORD *)(*(_DWORD *)(a2 + 4) + 12) + 8 * ((*(_BYTE *)(*(_DWORD *)(a2 + 4) + 6) & 8) != 0) + 56);
    v9 = (struct tagDESKTOP *)strlen(*(const char **)(a2 + 60));
    v10 = v4;
    v11 = ClassAllocString((SIZE_T)v9 + 1, v4, v9, v25, v27);
    v12 = v11;
    if ( v11 )
    {
      if ( v4 )
      {
        tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(v8 + 15, (int)v11);
      }
      else
      {
        v19 = v8[1];
        v8[15] = v12;
        *(_DWORD *)(v19 + 32) = 0;
      }
      v13 = *(_DWORD *)(a2 + 56);
      if ( (v13 & 0xFFFF0000) != 0 )
      {
        v20 = (_WORD *)(v13 + 2);
        do
        {
          v21 = *(_WORD *)v13;
          v13 += 2;
        }
        while ( v21 );
        v29 = 2 * ((v13 - (int)v20) >> 1) + 2;
        v22 = Win32AllocPoolWithQuota(v29, 2020897621);
        tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(v22);
        if ( !v8[14] )
        {
          ClassFree(v4, (void *)v8[15]);
          v23 = v4;
LABEL_26:
          ClassFree(v23, (int)v8);
          return 0;
        }
        v10 = v4;
      }
      if ( InitLookAsideRef<tagCLS>(v8) )
      {
        v8[5] = 0;
        LockObjectAssignment(v8 + 5, v10);
        *v8 = *(_DWORD *)(a2 + 36);
        v8[9] = 0;
        v24 = *(const void **)(a2 + 60);
        *(_DWORD *)(a2 + 36) = v8;
        memcpy((void *)v8[15], v24, (size_t)v9 + 1);
        v14 = v8[14];
        if ( (v14 & 0xFFFF0000) != 0 )
          memcpy((void *)v14, *(const void **)(a2 + 56), v29);
        v8[13] = 0;
        *(_DWORD *)(v28[1] + 36) = 0;
        v28[16] = 0;
        v28[12] = 0;
        HMAssignmentLock(0, v28 + 12);
        LockPointer((int)(v28 + 16), *(int **)(a2 + 64));
        HMAssignmentLock(v16, v15);
        v3 = a2;
        HMAssignmentLock(v18, v17);
        v6 = v28;
        v28[7] = 0;
        v28[10] = 0;
LABEL_16:
        ++*(_DWORD *)(v3 + 40);
        ++v6[10];
        tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(v6);
        return 1;
      }
      Win32FreePool(v8[14]);
      ClassFree(v10, (void *)v8[15]);
    }
    v23 = v10;
    goto LABEL_26;
  }
  return 0;
}

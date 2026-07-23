/*
 * XREFs of MiRemoveLargeFreeLoaderDescriptors @ 0x140A45604
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 */

void __fastcall MiRemoveLargeFreeLoaderDescriptors(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // r13
  ULONG_PTR v6; // r12
  int v7; // eax
  ULONG_PTR v8; // r14
  ULONG_PTR j; // r15
  ULONG_PTR v10; // rbp
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // rsi
  int v14; // edx
  __int64 *v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  __int64 **v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 *v26; // rdx
  __int64 **v27; // rax
  unsigned __int64 v28; // rax
  _QWORD *i; // [rsp+58h] [rbp+10h]

  qword_140D58758 = (__int64)&MxDeferredBootFreeDescriptorHead;
  MxDeferredBootFreeDescriptorHead = (__int64)&MxDeferredBootFreeDescriptorHead;
  if ( (KeFeatureBits & 0x2000000000LL) != 0 )
  {
    v1 = 0;
    if ( KeNumberNodes )
    {
      v2 = (_QWORD *)(a1 + 32);
      for ( i = (_QWORD *)(a1 + 32); ; v2 = i )
      {
        v3 = (_QWORD *)*v2;
        v4 = 0LL;
        v5 = 0LL;
        v6 = 0LL;
        if ( (_QWORD *)*v2 != v2 )
        {
          do
          {
            v7 = *((_DWORD *)v3 + 4);
            if ( v7 == 2 || v7 == 24 )
            {
              v8 = v3[4];
              for ( j = v3[3]; v8; v8 -= v10 )
              {
                v10 = MiRestrictRangeToNode(j, v8);
                if ( *((_DWORD *)MiSearchNumaNodeTable(j) + 2) == v1 )
                {
                  v5 += v10;
                  if ( v10 >= 0x200000 && j >= 0x100000 && v10 > v6 )
                  {
                    v6 = v10;
                    v4 = (__int64)v3;
                  }
                }
                j += v10;
              }
            }
            v3 = (_QWORD *)*v3;
          }
          while ( v3 != i );
          if ( v5 >= 0x300000 )
          {
            if ( v4 )
            {
              v11 = *(_QWORD *)(v4 + 32);
              v12 = *(_QWORD *)(v4 + 24);
              if ( v11 )
              {
                while ( 1 )
                {
                  v13 = MiRestrictRangeToNode(v12, v11);
                  if ( *((_DWORD *)MiSearchNumaNodeTable(v12) + 2) == v1
                    && v13 >= 0x200000
                    && v12 >= 0x100000
                    && v13 >= v6 )
                  {
                    if ( v5 - v13 >= 0x100000 )
                      goto LABEL_29;
                    if ( v5 - 0x100000 >= 0x100000 )
                      break;
                  }
                  v12 += v13;
                  v11 -= v13;
                  if ( !v11 )
                    goto LABEL_9;
                }
                v13 = v5 - 0x100000;
LABEL_29:
                v14 = MxDeferredBootFreeDescriptorIndex;
                v15 = &MxDeferredBootFreeDescriptor[5 * (unsigned int)MxDeferredBootFreeDescriptorIndex];
                *((_DWORD *)v15 + 4) = *(_DWORD *)(v4 + 16);
                v16 = (unsigned int)(v14 + 1);
                MxDeferredBootFreeDescriptorIndex = v14 + 1;
                v17 = (v12 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
                v18 = (v12 + v13) & 0xFFFFFFFFFFFC0000uLL;
                v19 = (__int64 **)qword_140D58758;
                v20 = v18 - v17;
                v15[3] = v17;
                v15[4] = v18 - v17;
                if ( *v19 != &MxDeferredBootFreeDescriptorHead )
LABEL_42:
                  __fastfail(3u);
                *v15 = (__int64)&MxDeferredBootFreeDescriptorHead;
                v15[1] = (__int64)v19;
                *v19 = v15;
                qword_140D58758 = (__int64)v15;
                v21 = *(_QWORD *)(v4 + 24);
                v22 = *(_QWORD *)(v4 + 32);
                v23 = v22 + v21;
                if ( v17 == v21 )
                {
                  if ( v18 != v23 )
                  {
                    *(_QWORD *)(v4 + 24) = v20 + v21;
LABEL_38:
                    *(_QWORD *)(v4 + 32) = v22 - v20;
                    goto LABEL_9;
                  }
                  v24 = *(_QWORD *)v4;
                  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
                    goto LABEL_42;
                  v25 = *(_QWORD **)(v4 + 8);
                  if ( *v25 != v4 )
                    goto LABEL_42;
                  *v25 = v24;
                  *(_QWORD *)(v24 + 8) = v25;
                }
                else
                {
                  if ( v18 == v23 )
                    goto LABEL_38;
                  MxDeferredBootFreeDescriptorIndex = v16 + 1;
                  v26 = &MxDeferredBootFreeDescriptor[5 * v16];
                  *((_DWORD *)v26 + 4) = *(_DWORD *)(v4 + 16);
                  v26[3] = *(_QWORD *)(v4 + 24);
                  v26[4] = v17 - *(_QWORD *)(v4 + 24);
                  v27 = *(__int64 ***)(v4 + 8);
                  if ( *v27 != (__int64 *)v4 )
                    goto LABEL_42;
                  v26[1] = (__int64)v27;
                  *v26 = v4;
                  *v27 = v26;
                  *(_QWORD *)(v4 + 8) = v26;
                  v28 = *(_QWORD *)(v4 + 24) - v17;
                  *(_QWORD *)(v4 + 24) = v18;
                  *(_QWORD *)(v4 + 32) += v28 - v20;
                }
              }
            }
          }
        }
LABEL_9:
        if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
          return;
      }
    }
  }
}

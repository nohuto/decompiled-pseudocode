/*
 * XREFs of ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A9CD0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::GetProperty(CPropertySet *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v3; // r10
  __int64 v4; // rdx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // xmm0_8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  v4 = *((_QWORD *)this + 10);
  v5 = *(_DWORD *)(v4 + 8 * v3);
  if ( v5 != 18 )
  {
    switch ( v5 )
    {
      case 17:
        *(_BYTE *)a3 = *(_BYTE *)((*(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 14));
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_3;
      case 35:
        v16 = *((_QWORD *)this + 14);
        v17 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 35;
        v18 = *(_QWORD *)(v17 + v16);
        result = 0LL;
        *(_QWORD *)a3 = v18;
        *((_BYTE *)a3 + 76) = 1;
        return result;
      case 52:
        v14 = *((_QWORD *)this + 14);
        v15 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)(v15 + v14);
        *((_DWORD *)a3 + 2) = *(_DWORD *)(v15 + v14 + 8);
        result = 0LL;
        *((_BYTE *)a3 + 76) = 1;
        return result;
      case 69:
        v22 = *((_QWORD *)this + 14);
        v23 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 69;
        *(_OWORD *)a3 = *(_OWORD *)(v23 + v22);
        goto LABEL_3;
      case 70:
        v19 = *((_QWORD *)this + 14);
        v20 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 70;
        v21 = *(_OWORD *)(v20 + v19);
        *((_BYTE *)a3 + 76) = 1;
        result = 0LL;
        *(_OWORD *)a3 = v21;
        return result;
      case 71:
        v24 = *((_QWORD *)this + 14);
        v25 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 71;
        *(_OWORD *)a3 = *(_OWORD *)(v25 + v24);
        goto LABEL_3;
      case 104:
        v7 = *((_QWORD *)this + 14);
        v8 = *(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 104;
        *(_OWORD *)a3 = *(_OWORD *)(v8 + v7);
        v9 = *(_QWORD *)(v8 + v7 + 16);
        result = 0LL;
        *((_QWORD *)a3 + 2) = v9;
        *((_BYTE *)a3 + 76) = 1;
        return result;
      case 265:
        v10 = *(_DWORD *)(v4 + 8 * v3 + 4);
        v11 = *((_QWORD *)this + 14);
        v12 = v10 & 0x1FFFFFFF;
        *((_DWORD *)a3 + 18) = 265;
        *(_OWORD *)a3 = *(_OWORD *)(v12 + v11);
        *((_OWORD *)a3 + 1) = *(_OWORD *)(v12 + v11 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)(v12 + v11 + 32);
        v13 = *(_OWORD *)(v12 + v11 + 48);
        *((_BYTE *)a3 + 76) = 1;
        result = 0LL;
        *((_OWORD *)a3 + 3) = v13;
        return result;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  *(_DWORD *)a3 = *(_DWORD *)((*(_DWORD *)(v4 + 8 * v3 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 14));
  *((_DWORD *)a3 + 18) = 18;
LABEL_3:
  *((_BYTE *)a3 + 76) = 1;
  return 0LL;
}

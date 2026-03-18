/*
 * XREFs of PnpProcessRelation @ 0x140767AEC
 * Callers:
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x140767D80 (PnpProcessBusRelations.c)
 *     PnpBuildRemovalRelationList @ 0x140767F88 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PnpQueryDeviceRelations @ 0x14074C534 (PnpQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x140767D80 (PnpProcessBusRelations.c)
 *     IopAddRelationToList @ 0x140767DF8 (IopAddRelationToList.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     IopIsRelationInList @ 0x1409582A8 (IopIsRelationInList.c)
 *     IopMergeRelationLists @ 0x1409582C4 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x140958430 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x140958514 (IopCancelPendingEject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  ULONG_PTR v10; // r12
  int v11; // eax
  ULONG_PTR BugCheckParameter4; // r14
  __int64 result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned int v16; // r14d
  ULONG_PTR v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r12d
  int v21; // ecx
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rdx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  ULONG_PTR v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _WORD *v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 *v38; // rdi
  __int64 v39; // rdx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  _WORD *v42; // rcx
  __int64 v43; // rcx
  __int64 *i; // rsi
  __int64 v45; // rcx
  ULONG_PTR v46; // r8
  __int64 v47; // rcx
  _WORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  ULONG_PTR v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  ULONG_PTR v63; // r8
  __int64 v64; // rcx
  _WORD *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rsi
  ULONG_PTR v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  int v79; // [rsp+80h] [rbp+18h]

  v79 = a3;
  v5 = 0LL;
  P[0] = 0LL;
  v7 = a3;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 790 )
      return 0LL;
    goto LABEL_3;
  }
  v21 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v21 - 784) <= 1 || v21 == 790 )
  {
    *(_DWORD *)a4 = 13;
    goto LABEL_153;
  }
  if ( *(int *)(a1 + 656) > 0 || ((v21 - 787) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)a4 = 5;
LABEL_153:
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
    return 3221225473LL;
  }
  if ( (unsigned int)(v21 - 780) <= 1 )
    return 3221225488LL;
LABEL_3:
  v10 = BugCheckParameter3;
  v11 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
    }
    else if ( v11 != -1073741670 )
    {
      v63 = *(_QWORD *)(a1 + 32);
      if ( v63 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), (PVOID)*(unsigned __int16 *)(v63 + 2));
        v63 = *(_QWORD *)(a1 + 32);
        v64 = *(_QWORD *)(v63 + 8);
        if ( v64 )
        {
          IoAddTriageDumpDataBlock(v64, (PVOID)(unsigned int)*(__int16 *)(v64 + 2));
          v63 = *(_QWORD *)(a1 + 32);
          v65 = (_WORD *)(*(_QWORD *)(v63 + 8) + 56LL);
          if ( *v65 )
          {
            IoAddTriageDumpDataBlock((ULONG)v65, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v63 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v63 )
        {
          v66 = *(_QWORD *)(v63 + 312);
          if ( *(_QWORD *)(v66 + 40) )
          {
            v67 = *(_QWORD *)(v66 + 40);
            IoAddTriageDumpDataBlock(v67, (PVOID)0x310);
            if ( *(_WORD *)(v67 + 40) )
            {
              IoAddTriageDumpDataBlock(v67 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v67 + 48), (PVOID)*(unsigned __int16 *)(v67 + 40));
            }
            v68 = *(_QWORD *)(a1 + 32);
            if ( v68 )
              v69 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
            else
              v69 = 0LL;
            if ( *(_WORD *)(v69 + 56) )
            {
              if ( v68 )
                v70 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
              else
                LODWORD(v70) = 0;
              IoAddTriageDumpDataBlock(v70 + 56, (PVOID)2);
              v71 = *(_QWORD *)(a1 + 32);
              if ( v71 )
              {
                v72 = *(_QWORD *)(*(_QWORD *)(v71 + 312) + 40LL);
                v73 = v72;
              }
              else
              {
                v72 = 0LL;
                v73 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v72 + 64), (PVOID)*(unsigned __int16 *)(v73 + 56));
              v68 = *(_QWORD *)(a1 + 32);
            }
            if ( v68 )
              v74 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
            else
              v74 = 0LL;
            v63 = v68;
            if ( *(_QWORD *)(v74 + 16) )
            {
              v75 = v68 ? *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v75 + 16) + 56LL) )
              {
                if ( v68 )
                  v76 = *(_QWORD *)(*(_QWORD *)(v68 + 312) + 40LL);
                else
                  v76 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v76 + 16) + 56, (PVOID)2);
                v77 = *(_QWORD *)(a1 + 32);
                if ( v77 )
                  v5 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 16) + 56LL));
                v63 = *(_QWORD *)(a1 + 32);
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, v63, BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    for ( i = (__int64 *)IopPendingEjects; ; i = (__int64 *)*i )
    {
      if ( i == &IopPendingEjects )
        goto LABEL_79;
      v45 = i[8];
      if ( v45 )
      {
        if ( (unsigned __int8)IopIsRelationInList(v45, *(_QWORD *)(a1 + 32)) )
          break;
      }
    }
    if ( a2 == 4 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(i);
      IopMergeRelationLists(BugCheckParameter3, i[8], 0LL);
      if ( v79 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
LABEL_78:
      if ( i == &IopPendingEjects )
      {
LABEL_79:
        v46 = *(_QWORD *)(a1 + 32);
        if ( v46 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), (PVOID)*(unsigned __int16 *)(v46 + 2));
          v46 = *(_QWORD *)(a1 + 32);
          v47 = *(_QWORD *)(v46 + 8);
          if ( v47 )
          {
            IoAddTriageDumpDataBlock(v47, (PVOID)(unsigned int)*(__int16 *)(v47 + 2));
            v46 = *(_QWORD *)(a1 + 32);
            v48 = (_WORD *)(*(_QWORD *)(v46 + 8) + 56LL);
            if ( *v48 )
            {
              IoAddTriageDumpDataBlock((ULONG)v48, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
              v46 = *(_QWORD *)(a1 + 32);
            }
          }
          if ( v46 )
          {
            v49 = *(_QWORD *)(v46 + 312);
            if ( *(_QWORD *)(v49 + 40) )
            {
              v50 = *(_QWORD *)(v49 + 40);
              IoAddTriageDumpDataBlock(v50, (PVOID)0x310);
              if ( *(_WORD *)(v50 + 40) )
              {
                IoAddTriageDumpDataBlock(v50 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v50 + 48), (PVOID)*(unsigned __int16 *)(v50 + 40));
              }
              v51 = *(_QWORD *)(a1 + 32);
              if ( v51 )
                v52 = *(_QWORD *)(*(_QWORD *)(v51 + 312) + 40LL);
              else
                v52 = 0LL;
              if ( *(_WORD *)(v52 + 56) )
              {
                if ( v51 )
                  v53 = *(_QWORD *)(*(_QWORD *)(v51 + 312) + 40LL);
                else
                  LODWORD(v53) = 0;
                IoAddTriageDumpDataBlock(v53 + 56, (PVOID)2);
                v54 = *(_QWORD *)(a1 + 32);
                if ( v54 )
                {
                  v55 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
                  v56 = v55;
                }
                else
                {
                  v55 = 0LL;
                  v56 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v55 + 64), (PVOID)*(unsigned __int16 *)(v56 + 56));
                v51 = *(_QWORD *)(a1 + 32);
              }
              if ( v51 )
                v57 = *(_QWORD *)(*(_QWORD *)(v51 + 312) + 40LL);
              else
                v57 = 0LL;
              v46 = v51;
              if ( *(_QWORD *)(v57 + 16) )
              {
                v58 = v51 ? *(_QWORD *)(*(_QWORD *)(v51 + 312) + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v58 + 16) + 56LL) )
                {
                  if ( v51 )
                    v59 = *(_QWORD *)(*(_QWORD *)(v51 + 312) + 40LL);
                  else
                    v59 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v59 + 16) + 56, (PVOID)2);
                  v60 = *(_QWORD *)(a1 + 32);
                  if ( v60 )
                  {
                    v61 = *(_QWORD *)(*(_QWORD *)(v60 + 312) + 40LL);
                    v62 = v61;
                  }
                  else
                  {
                    v61 = 0LL;
                    v62 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v61 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v62 + 16) + 56LL));
                  v46 = *(_QWORD *)(a1 + 32);
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 6uLL, v46, 0LL, 0LL);
      }
      return (unsigned int)BugCheckParameter4;
    }
    if ( a2 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(i[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000LL);
      goto LABEL_78;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
  if ( (int)result >= 0 )
  {
    v14 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v14 - 784) <= 1 )
      v14 = *(_DWORD *)(a1 + 304);
    if ( ((unsigned int)(v14 - 777) <= 1 || (unsigned int)(v14 - 780) <= 1)
      && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3, 0LL, (__int64)P) >= 0 )
    {
      v15 = P[0];
      if ( P[0] )
      {
        v16 = 0;
        if ( *(_DWORD *)P[0] )
        {
          do
          {
            v17 = v15[v16 + 1];
            v18 = *(_QWORD *)(v17 + 312);
            if ( (*(_DWORD *)(v18 + 32) & 2) != 0 || (v19 = *(_QWORD *)(v18 + 40)) == 0 || !*(_QWORD *)(v19 + 16) )
            {
              IoAddTriageDumpDataBlock(v17, (PVOID)*(unsigned __int16 *)(v17 + 2));
              v22 = *(_QWORD *)(v17 + 8);
              if ( v22 )
              {
                IoAddTriageDumpDataBlock(v22, (PVOID)(unsigned int)*(__int16 *)(v22 + 2));
                v23 = (_WORD *)(*(_QWORD *)(v17 + 8) + 56LL);
                if ( *v23 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v23, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v17 + 8) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v17 + 8) + 56LL));
                }
              }
              v24 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
              if ( v24 )
              {
                v25 = (unsigned __int16 *)(v24 + 40);
                IoAddTriageDumpDataBlock(v24, (PVOID)0x310);
                if ( *v25 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v25, (PVOID)2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v25 + 1), (PVOID)*v25);
                }
                v26 = *(_QWORD *)(v17 + 312);
                v27 = (_WORD *)(*(_QWORD *)(v26 + 40) + 56LL);
                if ( *v27 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v27, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 56LL));
                  v26 = *(_QWORD *)(v17 + 312);
                }
                v28 = *(_QWORD *)(*(_QWORD *)(v26 + 40) + 16LL);
                if ( v28 )
                {
                  v29 = (_WORD *)(v28 + 56);
                  if ( *v29 )
                  {
                    IoAddTriageDumpDataBlock((ULONG)v29, (PVOID)2);
                    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 64), (PVOID)*(unsigned __int16 *)(v30 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, v17, 3uLL, 0LL);
            }
            v20 = PnpProcessRelation(v19, a2, 0, a4, v10);
            ObfDereferenceObject((PVOID)v17);
            v15 = P[0];
            if ( v20 < 0 )
              goto LABEL_34;
            v10 = BugCheckParameter3;
          }
          while ( ++v16 < *(_DWORD *)P[0] );
        }
        ExFreePoolWithTag(v15, 0);
      }
    }
    if ( a2 - 5 > 1 )
    {
      if ( a2 )
      {
        if ( (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
        {
          v15 = P[0];
          if ( P[0] )
          {
            v31 = 0;
            if ( *(_DWORD *)P[0] )
            {
              while ( 1 )
              {
                v32 = v15[v31 + 1];
                v33 = *(_QWORD *)(v32 + 312);
                if ( (*(_DWORD *)(v33 + 32) & 2) != 0 || (v34 = *(_QWORD *)(v33 + 40)) == 0 || !*(_QWORD *)(v34 + 16) )
                {
                  IoAddTriageDumpDataBlock(v32, (PVOID)*(unsigned __int16 *)(v32 + 2));
                  v35 = *(_QWORD *)(v32 + 8);
                  if ( v35 )
                  {
                    IoAddTriageDumpDataBlock(v35, (PVOID)(unsigned int)*(__int16 *)(v35 + 2));
                    v36 = (_WORD *)(*(_QWORD *)(v32 + 8) + 56LL);
                    if ( *v36 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v36, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        *(_QWORD *)(*(_QWORD *)(v32 + 8) + 64LL),
                        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v32 + 8) + 56LL));
                    }
                  }
                  v37 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
                  if ( v37 )
                  {
                    v38 = (unsigned __int16 *)(v37 + 40);
                    IoAddTriageDumpDataBlock(v37, (PVOID)0x310);
                    if ( *v38 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v38, (PVOID)2);
                      IoAddTriageDumpDataBlock(*((_QWORD *)v38 + 1), (PVOID)*v38);
                    }
                    v39 = *(_QWORD *)(v32 + 312);
                    v40 = (_WORD *)(*(_QWORD *)(v39 + 40) + 56LL);
                    if ( *v40 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 64LL),
                        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 56LL));
                      v39 = *(_QWORD *)(v32 + 312);
                    }
                    v41 = *(_QWORD *)(*(_QWORD *)(v39 + 40) + 16LL);
                    if ( v41 )
                    {
                      v42 = (_WORD *)(v41 + 56);
                      if ( *v42 )
                      {
                        IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
                        v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 16LL);
                        IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 64), (PVOID)*(unsigned __int16 *)(v43 + 56));
                      }
                    }
                  }
                  KeBugCheckEx(0xCAu, 0xBuLL, v32, 1uLL, 0LL);
                }
                v20 = PnpProcessRelation(v34, a2, 0, a4, v10);
                ObfDereferenceObject((PVOID)v32);
                v15 = P[0];
                if ( v20 < 0 )
                  break;
                v10 = BugCheckParameter3;
                if ( ++v31 >= *(_DWORD *)P[0] )
                  goto LABEL_54;
              }
LABEL_34:
              ExFreePoolWithTag(v15, 0);
              return (unsigned int)v20;
            }
LABEL_54:
            ExFreePoolWithTag(v15, 0);
          }
        }
      }
    }
    result = PnpProcessDependencyRelations(a1, a2, v79 != 0, a4, BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      return (unsigned int)BugCheckParameter4;
    }
  }
  return result;
}

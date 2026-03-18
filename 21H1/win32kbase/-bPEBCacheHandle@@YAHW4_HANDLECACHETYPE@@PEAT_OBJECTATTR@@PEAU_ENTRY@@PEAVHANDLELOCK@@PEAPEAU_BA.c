/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C006CC10
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C007F9C0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00AA778 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x1C00AA9EC (EtwTraceGdiTransformHandle.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C0130C54 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD **a4, __int64 a5)
{
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  GdiHandleManager *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct OBJECT *v13; // r10
  __int64 v14; // r13
  unsigned int v15; // ebx
  unsigned int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct OBJECT *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  char v29; // al
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  char v33; // r10
  __int64 ProcessPeb; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  struct OBJECT *v39; // r12
  _DWORD **v40; // r14
  unsigned int v41; // ebx
  GdiHandleManager *v42; // rdi
  __int64 v43; // rcx
  unsigned int v44; // r8d
  unsigned int v45; // edx
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  unsigned int v50; // r9d
  unsigned int v51; // r8d
  __int64 v52; // rdx
  int v54; // ecx
  unsigned int v55; // eax
  unsigned int EtwGdiHandleType; // eax
  signed __int32 v57[14]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-B8h]
  struct OBJECT *v59; // [rsp+48h] [rbp-B0h]
  unsigned int v60; // [rsp+50h] [rbp-A8h]
  unsigned int v61; // [rsp+58h] [rbp-A0h]
  int v62; // [rsp+60h] [rbp-98h]
  _QWORD *v63; // [rsp+68h] [rbp-90h]
  _DWORD *v64; // [rsp+70h] [rbp-88h]
  _DWORD *v65; // [rsp+78h] [rbp-80h]
  struct OBJECT *v66; // [rsp+80h] [rbp-78h]
  __int64 v67; // [rsp+88h] [rbp-70h]
  __int64 v68; // [rsp+90h] [rbp-68h]
  __int64 v69; // [rsp+98h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+A0h] [rbp-58h]
  __int64 v71; // [rsp+A8h] [rbp-50h]
  __int64 v72; // [rsp+B0h] [rbp-48h]
  __int64 v73; // [rsp+B8h] [rbp-40h]
  int v74; // [rsp+100h] [rbp+8h]
  _QWORD *CurrentProcessWin32Process; // [rsp+110h] [rbp+18h]

  v74 = a1;
  v6 = a2;
  v58 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v7 = *a3 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = (unsigned __int16)v7;
    }
    else
    {
      v7 = (unsigned __int16)v7;
    }
  }
  v8 = gpHandleManager;
  v9 = *((_QWORD *)gpHandleManager + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_96;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
  v67 = v12;
  if ( (_DWORD)v11 )
    v7 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_96:
    v13 = 0LL;
  else
    v13 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  v59 = v13;
  v66 = v13;
  v14 = *(_QWORD *)v13;
  v15 = (unsigned __int16)*(_QWORD *)v13 | ((unsigned int)*(_QWORD *)v13 >> 8) & 0xFF0000;
  if ( v15 < 0x10000 )
  {
    v16 = (unsigned __int16)*(_QWORD *)v13 | ((unsigned int)*(_QWORD *)v13 >> 8) & 0xFF0000;
  }
  else
  {
    v16 = (unsigned __int16)*(_QWORD *)v13;
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v54 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                   (unsigned __int16)*(_QWORD *)v13,
                                   1)
            + 13);
      v55 = v15;
      if ( v54 == HIWORD(v15) )
        v55 = (unsigned __int16)v15;
      v16 = v55;
      v13 = v59;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v8 + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v59;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v17 = *((_QWORD *)v8 + 2);
  v18 = *(unsigned int *)(v17 + 2056);
  if ( v15 >= (unsigned int)v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v22 = 0LL;
  }
  else
  {
    if ( v15 >= (unsigned int)v18 )
      v19 = ((v15 - (unsigned int)v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
    v68 = v20;
    if ( (_DWORD)v19 )
      v21 = v15 + ((1 - (_DWORD)v19) << 16) - v18;
    else
      v21 = v15;
    v22 = 0LL;
    if ( v21 < *(_DWORD *)(v20 + 20) )
    {
      v18 = v21;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8LL * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8) )
        v22 = *(_QWORD *)v20 + 24LL * v21;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v17,
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v59;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v6 = a2;
  }
  v23 = *(unsigned int *)(v17 + 2056);
  if ( v15 >= (unsigned int)v23 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_113;
  if ( v15 >= (unsigned int)v23 )
    v24 = ((v15 - (unsigned int)v23) >> 16) + 1;
  else
    v24 = 0LL;
  v25 = *(_QWORD *)(v17 + 8 * v24 + 8);
  v69 = v25;
  if ( (_DWORD)v24 )
    v15 += ((1 - (_DWORD)v24) << 16) - v23;
  if ( v15 >= *(_DWORD *)(v25 + 20) )
  {
LABEL_113:
    v26 = 0LL;
  }
  else
  {
    v23 = v15 >> 8;
    v26 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * v23) + 16LL * (unsigned __int8)v15 + 8);
  }
  if ( v26 != v13 )
    v22 = 0LL;
  if ( v16 >= 0x10000 || *(_DWORD *)v8 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v26, v23, *(_DWORD *)(v22 + 8) & 0xFFFFFFFE);
    EtwTraceGdiTransformHandle(v14, v14, EtwGdiHandleType);
  }
  else
  {
    ++*(_BYTE *)(v22 + 13);
    v27 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
    *(_QWORD *)v13 = v27;
    v28 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v27 | (unsigned __int64)(((unsigned int)v27 >> 8) & 0xFF0000);
    *(_QWORD *)v22 = v28;
    v29 = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v28, *(_DWORD *)(v22 + 8) & 0xFFFFFFFE, v18);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
      McTemplateK0ppqqq_EtwWriteTransfer(v31, v30, v32, v14, v33, v29, v57[12], v32);
  }
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v35 = ProcessPeb;
  if ( ProcessPeb )
  {
    v62 = 0;
    if ( *(_QWORD *)(ProcessPeb + 320)
      || (Self = KeGetPcr()->NtTib.Self,
          _InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL)) )
    {
      v39 = v59;
    }
    else
    {
      v62 = 1;
      v36 = (unsigned int)gCacheHandleEntries[v74];
      if ( *(_DWORD *)(ProcessPeb + 4LL * v74 + 328) < (unsigned int)v36 )
      {
        v37 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v74) + 43LL));
        v63 = v37;
        v38 = &v37[v36];
        while ( 1 )
        {
          if ( v37 == v38 )
            goto LABEL_72;
          if ( !*v37 )
            break;
          v63 = ++v37;
        }
        v39 = v59;
        v71 = *(_QWORD *)v59;
        *v37 = v71;
        ++*(_DWORD *)(ProcessPeb + 4LL * v74 + 328);
        *v6 &= 0xFFFFFFF5;
        *v6 |= 1u;
        _InterlockedOr(v57, 0);
        v58 = 1;
        v40 = a4;
        v41 = **a4 & 0xFFFFFF;
        v60 = v41;
        if ( v41 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager <= 0x10000u )
          {
            v41 = (unsigned __int16)v41;
            v60 = (unsigned __int16)v41;
            goto LABEL_48;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v41,
                                      1)
               + 13) == HIWORD(v41) )
            v41 = (unsigned __int16)v41;
        }
        v60 = v41;
LABEL_48:
        v42 = gpHandleManager;
        v43 = *((_QWORD *)gpHandleManager + 2);
        v44 = *(_DWORD *)(v43 + 2056);
        if ( v41 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
        {
          v47 = 0LL;
        }
        else
        {
          if ( v41 >= v44 )
            v45 = ((v41 - v44) >> 16) + 1;
          else
            v45 = 0;
          v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
          v72 = v46;
          if ( v45 )
            v41 += ((1 - v45) << 16) - v44;
          if ( v41 >= *(_DWORD *)(v46 + 20) )
            v47 = 0LL;
          else
            v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8LL * (v41 >> 8)) + 16LL * (unsigned __int8)v41 + 8);
          v64 = v47;
        }
        v65 = v47;
        v48 = (unsigned __int16)*v47 | (*v47 >> 8) & 0xFF0000;
        if ( v48 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v47,
                                        1)
                 + 13) == HIWORD(v48) )
              v48 = (unsigned __int16)v48;
          }
          else
          {
            v48 = (unsigned __int16)*v47;
          }
          v40 = a4;
        }
        v61 = v48;
        if ( v48 >= 0x10000 )
        {
          if ( *(_DWORD *)v42 <= 0x10000u )
          {
            v61 = (unsigned __int16)v48;
            goto LABEL_62;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v42 + 2),
                                      (unsigned __int16)v48,
                                      1)
               + 13) == HIWORD(v48) )
          {
            v61 = (unsigned __int16)v48;
            goto LABEL_62;
          }
        }
        v61 = v48;
LABEL_62:
        v49 = *((_QWORD *)v42 + 2);
        v50 = *(_DWORD *)(v49 + 2056);
        if ( v48 < v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
        {
          if ( v48 >= v50 )
            v51 = ((v48 - v50) >> 16) + 1;
          else
            v51 = 0;
          v52 = *(_QWORD *)(v49 + 8LL * v51 + 8);
          v73 = v52;
          if ( v51 )
            v48 += ((1 - v51) << 16) - v50;
          *(_DWORD *)(*(_QWORD *)v52 + 24LL * v48 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v52 + 24) + 8LL * (v48 >> 8)) + 16LL * (unsigned __int8)v48,
            0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v40 + 2) = 0;
        *v40 = 0LL;
        KeLeaveCriticalRegion();
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
          *(_QWORD *)a5 = 0LL;
        }
        goto LABEL_70;
      }
LABEL_72:
      v39 = v59;
LABEL_70:
      *(_QWORD *)(v35 + 320) = 0LL;
    }
  }
  else
  {
    v39 = v59;
  }
  if ( !v58 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v39, 0);
  return v58;
}

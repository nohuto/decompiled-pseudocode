/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E3870
 * Callers:
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E4880 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800CE278 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  void **v8; // rdi
  CProcessAttributionManager::Record **v9; // rbx
  char *v10; // r12
  CProcessAttributionManager::Record *v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // r13
  int v15; // r10d
  int v16; // r11d
  int v17; // esi
  int v18; // r14d
  bool v19; // r10
  int v20; // r9d
  int v21; // r15d
  bool v22; // dl
  _DWORD *v23; // r12
  bool v24; // r8
  bool v25; // r9
  int v26; // ecx
  bool v27; // zf
  int v28; // esi
  int v29; // r14d
  int v30; // r15d
  int v31; // r12d
  int v32; // r13d
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  _BYTE *v37; // r13
  _QWORD *v38; // rax
  __int64 v39; // rcx
  CProcessAttributionManager::Record *v40; // rcx
  void **v41; // r14
  __int64 v42; // rcx
  char v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  void *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+74h] [rbp-8Ch]
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  void *Src; // [rsp+80h] [rbp-80h]
  _DWORD *v53; // [rsp+88h] [rbp-78h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  void **v57; // [rsp+A8h] [rbp-58h]
  _BYTE v58[96]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2;
  v48 = a2;
  v56 = a3;
  v57 = a1;
  v55 = a4;
  v6 = a4;
  memset_0(v58, 0, 0x54uLL);
  v8 = *(void ***)(v4 + 16);
  v9 = (CProcessAttributionManager::Record **)*a1;
  Src = v8 + 1;
  v10 = (char *)(v9 + 1);
LABEL_2:
  v47 = v10;
  while ( v8 != *(void ***)(v4 + 24) )
  {
    v11 = *v9;
    v12 = *v8;
    v45 = v12;
    v13 = *(_QWORD *)v11;
    v14 = (_DWORD *)*((_QWORD *)v11 + 14);
    v53 = v14;
    v54 = v13;
    if ( *(_QWORD *)v12 != v13 )
    {
      ++v9;
      v10 += 8;
      goto LABEL_2;
    }
    v44 = *((_DWORD *)v11 + 30);
    v46 = v12[2];
    v43 = 0;
    if ( v14 )
    {
      v15 = v12[3];
      ++v8;
      Src = (char *)Src + 8;
      v16 = v12[4];
      v17 = v12[5];
      v18 = v12[6];
      v19 = v15 != v14[7];
      v20 = v14[10];
      v21 = v14[6];
      v22 = v16 != v14[8];
      v23 = v45;
      v24 = v17 != v14[9];
      *(_OWORD *)(v45 + 2) = *(_OWORD *)(v14 + 6);
      v25 = v18 != v20;
      v26 = 0;
      v23[6] = v14[10];
      v27 = v46 == v21;
    }
    else
    {
      v28 = *((_DWORD *)v11 + 3);
      v29 = *((_DWORD *)v11 + 4);
      v30 = *((_DWORD *)v11 + 5);
      v31 = *((_DWORD *)v11 + 6);
      v32 = v12[3];
      LODWORD(v45) = *((_DWORD *)v11 + 2);
      v49 = v12[4];
      v50 = v12[5];
      LODWORD(v51) = v12[6];
      v43 = 1;
      operator delete(v12);
      memmove_0(v8, Src, *(_QWORD *)(v48 + 24) - (_QWORD)Src);
      *(_QWORD *)(v48 + 24) -= 8LL;
      --*((_DWORD *)*v9 + 40);
      v27 = v32 == v28;
      v14 = v53;
      v19 = !v27;
      v22 = v49 != v29;
      v24 = v50 != v30;
      v25 = (_DWORD)v51 != v31;
      v26 = 0;
      v27 = v46 == (_DWORD)v45;
    }
    v10 = (char *)v47;
    LOBYTE(v26) = !v27;
    v33 = v26 | 2;
    if ( !v19 )
      v33 = v26;
    v34 = v33 | 4;
    if ( !v22 )
      v34 = v33;
    v35 = v34 | 8;
    if ( !v24 )
      v35 = v34;
    v36 = v35 | 0x10;
    if ( !v25 )
      v36 = v35;
    v7 = v36 | 0x20;
    if ( !v43 )
      v7 = v36;
    if ( (_DWORD)v7 )
    {
      if ( v14 )
        v37 = v14 + 11;
      else
        v37 = v58;
      if ( *((_QWORD *)*v9 + 18) )
      {
        v38 = (_QWORD *)((char *)*v9 + 128);
        if ( *((_QWORD *)*v9 + 19) >= 8uLL )
          v38 = (_QWORD *)*v38;
      }
      else
      {
        v38 = 0LL;
      }
      v6 = v55;
      v53 = v38;
      v39 = *(_QWORD *)(v55 + 56);
      v51 = v56;
      LODWORD(v45) = v7;
      if ( !v39 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        break;
      }
      (*(void (__fastcall **)(__int64, __int64 *, int *, __int64 *, _DWORD **, _DWORD **, _BYTE *))(*(_QWORD *)v39 + 16LL))(
        v39,
        &v51,
        &v44,
        &v54,
        &v53,
        &v45,
        v37);
    }
    else
    {
      v6 = v55;
    }
    v40 = *v9;
    if ( *((_DWORD *)*v9 + 40) )
    {
      ++v9;
      v10 += 8;
      v47 = v10;
    }
    else
    {
      if ( v40 )
        CProcessAttributionManager::Record::`scalar deleting destructor'(v40);
      v41 = v57;
      memmove_0(v9, v10, (_BYTE *)v57[1] - v10);
      v41[1] = (char *)v41[1] - 8;
    }
    v4 = v48;
  }
  v42 = *(_QWORD *)(v6 + 56);
  if ( v42 )
  {
    LOBYTE(v7) = v42 != v6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 32LL))(v42, v7);
    *(_QWORD *)(v6 + 56) = 0LL;
  }
}

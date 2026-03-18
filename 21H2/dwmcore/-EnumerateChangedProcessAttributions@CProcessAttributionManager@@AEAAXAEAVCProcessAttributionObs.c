/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x18007B4A0
 * Callers:
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180078A60 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x18007B3D8 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800F18EC (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
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
  __int64 result; // rax
  char *v11; // r12
  CProcessAttributionManager::Record *v12; // rcx
  _DWORD *v13; // r9
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
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  CProcessAttributionManager::Record *v31; // rcx
  _BYTE *v32; // r13
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // esi
  int v37; // r14d
  int v38; // r15d
  int v39; // r12d
  int v40; // r13d
  void **v41; // r14
  char v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  void *v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+74h] [rbp-8Ch]
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  void *Src; // [rsp+80h] [rbp-80h]
  _DWORD *v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  void **v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[96]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2;
  v47 = a2;
  v55 = a3;
  v56 = a1;
  v54 = a4;
  v6 = a4;
  memset_0(v57, 0, 0x54uLL);
  v8 = *(void ***)(v4 + 16);
  v9 = (CProcessAttributionManager::Record **)*a1;
  result = (__int64)(v8 + 1);
  Src = v8 + 1;
  v11 = (char *)(v9 + 1);
LABEL_2:
  v46 = v11;
  while ( v8 != *(void ***)(v4 + 24) )
  {
    v12 = *v9;
    v13 = *v8;
    v44 = v13;
    result = *(_QWORD *)v12;
    v14 = (_DWORD *)*((_QWORD *)v12 + 14);
    v52 = v14;
    v53 = result;
    if ( *(_QWORD *)v13 != result )
    {
      ++v9;
      v11 += 8;
      goto LABEL_2;
    }
    v43 = *((_DWORD *)v12 + 30);
    v45 = v13[2];
    v42 = 0;
    if ( v14 )
    {
      v15 = v13[3];
      ++v8;
      Src = (char *)Src + 8;
      v16 = v13[4];
      v17 = v13[5];
      v18 = v13[6];
      v19 = v15 != v14[7];
      v20 = v14[10];
      v21 = v14[6];
      v22 = v16 != v14[8];
      v23 = v44;
      v24 = v17 != v14[9];
      *(_OWORD *)(v44 + 2) = *(_OWORD *)(v14 + 6);
      v25 = v18 != v20;
      v26 = 0;
      v23[6] = v14[10];
      v27 = v45 == v21;
    }
    else
    {
      v36 = *((_DWORD *)v12 + 3);
      v37 = *((_DWORD *)v12 + 4);
      v38 = *((_DWORD *)v12 + 5);
      v39 = *((_DWORD *)v12 + 6);
      v40 = v13[3];
      LODWORD(v44) = *((_DWORD *)v12 + 2);
      v48 = v13[4];
      v49 = v13[5];
      LODWORD(v50) = v13[6];
      v42 = 1;
      operator delete(v13, 0x70uLL);
      memmove_0(v8, Src, *(_QWORD *)(v47 + 24) - (_QWORD)Src);
      *(_QWORD *)(v47 + 24) -= 8LL;
      --*((_DWORD *)*v9 + 40);
      v27 = v40 == v36;
      v14 = v52;
      v19 = !v27;
      v22 = v48 != v37;
      v24 = v49 != v38;
      v25 = (_DWORD)v50 != v39;
      v26 = 0;
      v27 = v45 == (_DWORD)v44;
    }
    v11 = (char *)v46;
    LOBYTE(v26) = !v27;
    v28 = v26 | 2;
    if ( !v19 )
      v28 = v26;
    v29 = v28 | 4;
    if ( !v22 )
      v29 = v28;
    result = v29 | 8;
    if ( !v24 )
      result = v29;
    v30 = result | 0x10;
    if ( !v25 )
      v30 = result;
    v7 = v30 | 0x20;
    if ( !v42 )
      v7 = v30;
    if ( (_DWORD)v7 )
    {
      if ( v14 )
        v32 = v14 + 11;
      else
        v32 = v57;
      if ( *((_QWORD *)*v9 + 18) )
      {
        v33 = (_QWORD *)((char *)*v9 + 128);
        if ( *((_QWORD *)*v9 + 19) >= 8uLL )
          v33 = (_QWORD *)*v33;
      }
      else
      {
        v33 = 0LL;
      }
      v6 = v54;
      v52 = v33;
      v34 = *(_QWORD *)(v54 + 56);
      v50 = v55;
      LODWORD(v44) = v7;
      if ( !v34 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x180140C4DLL);
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, __int64 *, _DWORD **, _DWORD **, _BYTE *))(*(_QWORD *)v34 + 16LL))(
                 v34,
                 &v50,
                 &v43,
                 &v53,
                 &v52,
                 &v44,
                 v32);
    }
    else
    {
      v6 = v54;
    }
    v31 = *v9;
    if ( *((_DWORD *)*v9 + 40) )
    {
      ++v9;
      v11 += 8;
      v46 = v11;
    }
    else
    {
      if ( v31 )
        CProcessAttributionManager::Record::`scalar deleting destructor'(v31, v7);
      v41 = v56;
      result = (__int64)memmove_0(v9, v11, (_BYTE *)v56[1] - v11);
      v41[1] = (char *)v41[1] - 8;
    }
    v4 = v47;
  }
  v35 = *(_QWORD *)(v6 + 56);
  if ( v35 )
  {
    LOBYTE(v7) = v35 != v6;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 32LL))(v35, v7);
    *(_QWORD *)(v6 + 56) = 0LL;
  }
  return result;
}

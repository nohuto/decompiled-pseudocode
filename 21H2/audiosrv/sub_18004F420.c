/*
 * XREFs of sub_18004F420 @ 0x18004F420
 * Callers:
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_0 @ 0x18004F3E0 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 *     sub_1800E2D60 @ 0x1800E2D60 (sub_1800E2D60.c)
 *     sub_1800E3140 @ 0x1800E3140 (sub_1800E3140.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall sub_18004F420(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  DWORD LastError; // ebx
  __int64 v6; // r10
  __int64 v7; // rcx
  _WORD *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _RTL_CRITICAL_SECTION *v17; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 CriticalSection; // rbx
  __int64 v20; // rcx
  LPVOID *v21; // rbx
  __int64 result; // rax
  __int64 v23; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-128h] BYREF
  int v25; // [rsp+34h] [rbp-124h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-120h] BYREF
  __int64 v27; // [rsp+40h] [rbp-118h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-110h]
  _QWORD *v29; // [rsp+50h] [rbp-108h]
  _QWORD v30[2]; // [rsp+58h] [rbp-100h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-E8h]
  _QWORD v33[10]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 *v34; // [rsp+D0h] [rbp-88h]
  int v35; // [rsp+D8h] [rbp-80h]
  int v36; // [rsp+DCh] [rbp-7Ch]
  void *v37; // [rsp+E0h] [rbp-78h]
  int v38; // [rsp+E8h] [rbp-70h]
  int v39; // [rsp+ECh] [rbp-6Ch]
  _QWORD *v40; // [rsp+F0h] [rbp-68h]
  __int64 v41; // [rsp+F8h] [rbp-60h]
  _WORD *v42; // [rsp+100h] [rbp-58h]
  int v43; // [rsp+108h] [rbp-50h]
  int v44; // [rsp+10Ch] [rbp-4Ch]
  __int64 v45; // [rsp+110h] [rbp-48h]
  __int64 v46; // [rsp+118h] [rbp-40h]
  int *v47; // [rsp+120h] [rbp-38h]
  __int64 v48; // [rsp+128h] [rbp-30h]
  void *retaddr; // [rsp+158h] [rbp+0h]

  v30[1] = a1;
  *(_QWORD *)a1 = off_18014A960;
  v2 = a1 + 8;
  *(_QWORD *)(a1 + 8) = off_18014A880;
  *(_QWORD *)(a1 + 16) = off_18014A860;
  *(_QWORD *)(a1 + 24) = off_18014A830;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    LastError = GetLastError();
    sub_1800ED08C(v4);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v7 = *(_QWORD *)(a1 + 48);
    v25 = *(_DWORD *)(v7 + 8);
    v8 = *(_WORD **)v7;
    v30[0] = v2;
    v47 = &v25;
    v48 = 4LL;
    v45 = v7 + 48;
    v46 = 16LL;
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v8 = &unk_18015C744;
      v10 = 2;
    }
    v42 = v8;
    v43 = v10;
    v44 = 0;
    v40 = v30;
    v41 = 8LL;
    v31[0] = 184549376;
    v31[1] = 4;
    v32 = 0LL;
    v34 = *(unsigned __int16 **)(v6 + 8);
    v35 = *v34;
    v36 = 2;
    v37 = &unk_180167913;
    v38 = 64;
    v39 = 1;
    LODWORD(v29) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v31, 0LL);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    sub_1800E3140(&v27, *(_QWORD *)(a1 + 48));
    v29 = v33;
    v11 = v28;
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v28 + 2);
      v11 = v28;
    }
    v33[0] = off_18014A448;
    v33[1] = v27;
    v33[2] = v11;
    v33[7] = v33;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
    v13 = sub_1800670EC(v12, v33);
    if ( v13 < 0 )
    {
      sub_1800BB3A8(
        retaddr,
        2084LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v13);
      __debugbreak();
      JUMPOUT(0x18004F928LL);
    }
    if ( v28 )
      sub_180052600(v28);
  }
  v14 = *(_QWORD *)(a1 + 112);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *(_QWORD *)(a1 + 80);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
    sub_1800ED08C(v16);
  v17 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 56);
  if ( v17 )
  {
    DebugInfo = v17[1].DebugInfo;
    CriticalSection = (__int64)DebugInfo->CriticalSection;
    if ( !*(_BYTE *)(CriticalSection + 25) )
    {
      do
      {
        sub_1800E2D60(&v17[1], &v17[1], *(_QWORD *)(CriticalSection + 16));
        v20 = CriticalSection;
        CriticalSection = *(_QWORD *)CriticalSection;
        sub_1800472E0(v20, 0x28uLL);
      }
      while ( !*(_BYTE *)(CriticalSection + 25) );
      DebugInfo = v17[1].DebugInfo;
    }
    sub_18006A148(DebugInfo, 40LL);
    DeleteCriticalSection(v17);
    sub_18006A148(v17, 64LL);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v21 = *(LPVOID **)(a1 + 48);
  if ( v21 )
  {
    CoTaskMemFree(v21[3]);
    v21[3] = 0LL;
    CoTaskMemFree(v21[2]);
    v21[2] = 0LL;
    CoTaskMemFree(*v21);
    *v21 = 0LL;
    sub_18006A148(v21, 96LL);
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  result = *(_QWORD *)(a1 + 40) >> 63;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    result = sub_18006D208(2LL * *(_QWORD *)(a1 + 40) + 12);
    if ( !(_DWORD)result )
    {
      if ( v23 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, 1LL);
      if ( qword_18019E418 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    }
  }
  return result;
}

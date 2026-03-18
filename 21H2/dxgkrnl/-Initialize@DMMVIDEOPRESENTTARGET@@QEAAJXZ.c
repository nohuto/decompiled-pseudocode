/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0213BB8
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0213A20 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C039FAA8 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx

  v5 = operator new[](0xB0uLL, 0x4E506456u, 64LL, a4);
  *((_QWORD *)this + 67) = v5;
  if ( v5
    && (*(_QWORD *)(v5 + 160) = 0LL,
        *(_BYTE *)(*((_QWORD *)this + 67) + 168LL) = 0,
        *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) = 0,
        *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) = 0,
        KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL)),
        KeInitializeDpc(
          (PRKDPC)(*((_QWORD *)this + 67) + 80LL),
          (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
          *((PVOID *)this + 67)),
        (*(_QWORD *)(*((_QWORD *)this + 67) + 144LL) = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject)) != 0LL) )
  {
    v6 = *((_QWORD *)this + 5);
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      v6 = *((_QWORD *)this + 5);
    }
    v7 = *(_QWORD *)(v6 + 88);
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      v8 = *(_QWORD *)(v7 + 8);
    }
    v9 = *(_QWORD *)(v8 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
    *(_QWORD *)(*((_QWORD *)this + 67) + 8LL) = this;
    **((_QWORD **)this + 67) = v9;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 6), -1073741670LL);
    return 3221225626LL;
  }
}

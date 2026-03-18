/*
 * XREFs of ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x1800AC964
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C2DFC (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C2E6C (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801553B0 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_DeleteResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_DELETERESOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v17; // rcx

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 && v4 < *((_DWORD *)a3 + 7) && (v7 = *((_QWORD *)a3 + 5), v8 = v4 * *((_DWORD *)a3 + 6), *(_DWORD *)(v8 + v7)) )
    v9 = *(_QWORD *)(v8 + v7 + 8);
  else
    v9 = 0LL;
  if ( !v9 )
    CComposition::FailFastOnMalformedPacket(this, 724106194LL, 0LL, a4);
  (*(void (__fastcall **)(__int64, struct CChannelContext *, _QWORD))(*(_QWORD *)v9 + 176LL))(v9, a2, 0LL);
  v11 = *((_QWORD *)a2 + 3);
  v12 = -2147024890;
  if ( !v4
    || v4 >= *(_DWORD *)(v11 + 28)
    || (v13 = (unsigned int *)(*(_QWORD *)(v11 + 40) + v4 * *(_DWORD *)(v11 + 24)), !*v13) )
  {
    v13 = 0LL;
  }
  if ( v13 && *v13 )
  {
    if ( *((_QWORD *)v13 + 1) )
    {
      v14 = AddToResourceCount(*(_QWORD *)(v11 + 56) + 44LL, *v13, 0xFFFFFFFFLL);
      anonymous_namespace_::AddToResourceCount(v14, v15);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v13 + 1) + 16LL))(*((_QWORD *)v13 + 1));
      *((_QWORD *)v13 + 1) = 0LL;
    }
    memset_0((void *)(*(_QWORD *)(v11 + 40) + v4 * *(_DWORD *)(v11 + 24)), 0, *(unsigned int *)(v11 + 24));
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024890, 0xA18u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024890, 0x64Bu, 0LL);
  }
  return v12;
}

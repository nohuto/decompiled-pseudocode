/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C0037F70
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C0026F30 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00AD58C (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  int v2; // r8d
  __int64 v3; // r9
  struct PPL_POOL_HANDLE__ *v6; // rbx
  unsigned int DataSize; // esi
  int v8; // eax
  unsigned int v9; // esi
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v11; // al
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_342ed8e916733a777411d9bc9db77172_Traceguids,
      NdisHandle);
  if ( Parameters->Header.Type != 0x80 || !Parameters->Header.Revision )
    goto LABEL_11;
  DataSize = Parameters->DataSize;
  v8 = 176;
  if ( !DataSize )
    goto LABEL_6;
  if ( DataSize <= 0x100000 )
  {
    v8 = DataSize + ((MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8) + 176;
LABEL_6:
    v9 = (v8 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool((__int64)NdisHandle, v9, Parameters->PoolTag, v3, 0);
    v6 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 268;
      *((_WORD *)Pool + 1) = 384;
      *((_QWORD *)Pool + 5) = NdisHandle;
      *((_DWORD *)Pool + 14) = Parameters->PoolTag;
      if ( Parameters->DataSize )
      {
        *((_DWORD *)Pool + 22) |= 1u;
        *((_DWORD *)Pool + 23) = Parameters->DataSize;
        *((_DWORD *)Pool + 24) = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
      }
      *((_DWORD *)v6 + 8) = v9;
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 8);
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 1);
      *((_QWORD *)v6 + 3) = (char *)v6 + 16;
      *((_QWORD *)v6 + 2) = (char *)v6 + 16;
      v11 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E5D40);
      v12 = qword_1C00E5FC8;
      v13 = (_QWORD *)((char *)v6 + 72);
      if ( *(__int64 **)(qword_1C00E5FC8 + 8) != &qword_1C00E5FC8 )
        __fastfail(3u);
      *v13 = qword_1C00E5FC8;
      *((_QWORD *)v6 + 10) = &qword_1C00E5FC8;
      *(_QWORD *)(v12 + 8) = v13;
      qword_1C00E5FC8 = (__int64)v6 + 72;
      KeReleaseSpinLock(&qword_1C00E5D40, v11);
      *((_QWORD *)v6 + 6) = retaddr;
    }
    goto LABEL_11;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v6;
  WPP_RECORDER_SF_PP(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    (_DWORD)Parameters,
    v2,
    11,
    (__int64)&WPP_342ed8e916733a777411d9bc9db77172_Traceguids,
    Parameters->DataSize);
LABEL_11:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xCu,
      (struct _GUID *)&WPP_342ed8e916733a777411d9bc9db77172_Traceguids,
      (char)NdisHandle,
      v6);
  return v6;
}

/*
 * XREFs of ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0007990
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0007A94 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?GetInfo@CBufferRealization@@QEBAXPEAUCSM_REALIZATION_INFO@@_N@Z @ 0x1C0007B4C (-GetInfo@CBufferRealization@@QEBAXPEAUCSM_REALIZATION_INFO@@_N@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetSwapChainRealizationInfo(
        CFlipExBuffer *this,
        bool a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  int v4; // ebx
  bool v7; // r8
  unsigned int v9; // eax
  char *v10; // r15
  __int64 v11; // rsi
  char *v12; // r14
  int v13; // eax
  struct CSM_REALIZATION_INFO *v14; // r13
  bool v15; // dl
  HANDLE *v17; // rdi
  void *v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v7 = a2;
  if ( !a4 )
    goto LABEL_12;
  v9 = *((_DWORD *)this + 68);
  if ( v9 > *a3 )
    return (unsigned int)-1073741811;
  if ( !v9 || (v10 = (char *)this + 256, v11 = 0LL, v12 = (char *)*((_QWORD *)this + 32), v12 == (char *)this + 256) )
  {
LABEL_12:
    *a3 = *((_DWORD *)this + 68);
    return (unsigned int)v4;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v12 + 4);
    v19 = 0LL;
    v14 = (struct CSM_REALIZATION_INFO *)((char *)a4 + 40 * v11);
    *(_DWORD *)v14 = v13;
    CBufferRealization::GetInfo((CBufferRealization *)(v12 - 8), v14, v7);
    if ( !v7 )
      break;
LABEL_11:
    v12 = *(char **)v12;
    v11 = (unsigned int)(v11 + 1);
    if ( v12 == v10 )
      goto LABEL_12;
  }
  v15 = (*((_DWORD *)this + 46) & 0x100) != 0 || *((_DWORD *)this + 68) == 1;
  v4 = CBufferRealization::OpenDxSurfaceHandle((CBufferRealization *)(v12 - 8), v15, 0, &v19);
  if ( v4 >= 0 )
  {
    v7 = a2;
    *((_QWORD *)v14 + 1) = v19;
    goto LABEL_11;
  }
  if ( (_DWORD)v11 )
  {
    v17 = (HANDLE *)((char *)a4 + 8);
    do
    {
      ObCloseHandle(*v17, 1);
      v17 += 5;
      --v11;
    }
    while ( v11 );
  }
  return (unsigned int)v4;
}

/*
 * XREFs of ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C0337860
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A410 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

void __fastcall DXGPROCESSVM::SetVmProcessName(DXGPROCESSVM *this, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v7; // ebp
  unsigned __int64 v8; // rax
  void *v9; // rax
  size_t v10; // rbx

  a2[260] = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !*((_QWORD *)this + 80) )
  {
    v7 = v5 + 1;
    v8 = 2LL * (unsigned int)(v5 + 1);
    if ( !is_mul_ok((unsigned int)(v5 + 1), 2uLL) )
      v8 = -1LL;
    v9 = (void *)operator new[](v8, 0x4B677844u, 256LL, a4);
    *((_QWORD *)this + 80) = v9;
    if ( v9 )
    {
      v10 = 2LL * (unsigned int)v5;
      memmove(v9, a2, v10);
      *(_WORD *)(v10 + *((_QWORD *)this + 80)) = 0;
      *((_DWORD *)this + 162) = v7;
    }
  }
}

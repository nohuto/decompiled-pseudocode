/*
 * XREFs of ?SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z @ 0x18018EF48
 * Callers:
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018E91C (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLocalAppRenderTarget::SendCompSurfHandle(CLocalAppRenderTarget *this, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned int v5; // ecx
  int v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  void *v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
  v4 = *((unsigned int *)this + 14);
  if ( v2 )
    v5 = *(_DWORD *)(v2 + 68);
  else
    v5 = 0;
  v8[0] = v5;
  LOWORD(v6) = 0;
  v8[1] = v4;
  v9 = a2;
  CoreUICallSend(v3, v8, 2LL, 9LL, v6, &unk_1802CFB01, (unsigned int)&v9, v7);
}

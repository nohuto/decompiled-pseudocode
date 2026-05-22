/*
 * XREFs of ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x180186D90
 * Callers:
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x180186FAC (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CursorManager::CursorManager(__int64 a1, __int64 a2, int a3)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CursorManager::`vftable'{for `ICursorManager'};
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 8) = &CursorManager::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *(_QWORD *)(a1 + 16) = &CursorManager::`vftable'{for `RefCountedObject'};
  v6 = (__int64 *)(a1 + 32);
  *(_BYTE *)(a1 + 84) = 0;
  *v6 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v6);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 80) = a3;
  *(_DWORD *)(a1 + 88) = 2;
  return result;
}

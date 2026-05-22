/*
 * XREFs of ?ProtectSectionMemory@SipcPort@@CAJPEAX_KK@Z @ 0x1800C1340
 * Callers:
 *     ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800C12E0 (-ProtectSection@SipcPort@@QEAAJPEAX_K1@Z.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800C1388 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcPort::ProtectSectionMemory(void *a1, __int64 a2, DWORD a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  DWORD flOldProtect; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((unsigned __int64)a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v4 = ((unsigned __int64)a1 + a2) & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 > v3 )
    VirtualProtect((LPVOID)(((unsigned __int64)a1 + 4095) & 0xFFFFFFFFFFFFF000uLL), v4 - v3, a3, &flOldProtect);
  return 0LL;
}

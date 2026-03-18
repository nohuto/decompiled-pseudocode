/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C0020CB4
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0020C20 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0020D48 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  __int64 v4; // rbx
  struct GdiHandleEntryTable *v5; // rax
  struct GdiHandleEntryTable *v6; // rdi
  struct GdiHandleEntryDirectory *result; // rax

  v4 = Win32AllocPool(2064LL, 1668572487LL);
  if ( v4 )
  {
    v5 = GdiHandleEntryTable::_Create(a2, 0);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = a1;
      memset((void *)(v4 + 16), 0, 0x7F8uLL);
      *(_BYTE *)v4 = 0;
      *(_WORD *)(v4 + 2) = 1;
      result = (struct GdiHandleEntryDirectory *)v4;
      *(_DWORD *)(v4 + 2056) = a2;
      *(_QWORD *)(v4 + 8) = v6;
      return result;
    }
    Win32FreePool(v4);
  }
  return 0LL;
}

/*
 * XREFs of ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4
 * Callers:
 *     ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02 (-xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 */

int __userpurge FreeListAdd@<eax>(int a1@<edx>, int a2@<ecx>, struct tagDDECONV *a3, void *a4, unsigned int a5)
{
  int result; // eax
  _DWORD *v8; // esi
  char ThreadId; // al
  int v10; // edx
  int v11; // ecx

  result = Win32AllocPool(12, 828666709);
  v8 = (_DWORD *)result;
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 8));
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qq(v11, v10, 0xEu, 52, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, a1, ThreadId);
    }
    v8[2] = a3;
    v8[1] = a1;
    *v8 = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a2 + 36) = v8;
    return 1;
  }
  return result;
}

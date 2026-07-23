/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408CA3D8
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x1408CE928 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CEA74 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _QWORD *v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = (_QWORD *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 2172);
    if ( (v5 & 0x1000) == 0 && v7 != (_QWORD *)PsSecureSystemProcess && (v5 & 1) == 0 && !v7[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v7, 0, (__int64)v9);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess((__int64)v9, 0LL);
    }
  }
  return 0LL;
}

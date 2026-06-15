/*
 * XREFs of ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140013AA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140051278 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTMemoryInitOnce(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  char v3; // si
  char v4; // bp
  char v6; // di
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  void *v11; // rdi
  void *v13; // [rsp+60h] [rbp-28h] BYREF
  int pvData; // [rsp+A0h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+20h] BYREF

  v3 = gMinSize;
  v4 = gInitialSize;
  v6 = gMaxSize;
  v7 = 0;
  v13 = 0LL;
  RtlCreateMemoryBlockLookaside(&v13, 0LL, gInitialSize, gMinSize, gMaxSize);
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v9, v8, v10, 3, (char)v13, v4, v3, v6);
  v11 = v13;
  *Context = v13;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v9, v8, v10, 1, (char)v11, 0, 0, 0);
  if ( !v11 )
    SetLastError(0xEu);
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SkipRTHeap",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_bSkipRTHeap = pvData != 0;
  LOBYTE(v7) = v11 != 0LL;
  return v7;
}

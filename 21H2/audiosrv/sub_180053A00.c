/*
 * XREFs of sub_180053A00 @ 0x180053A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

__int64 __fastcall sub_180053A00(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
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

  v3 = qword_18019E7B0;
  v4 = qword_18019E7B8;
  v6 = qword_18019E7A8;
  v7 = 0;
  v13 = 0LL;
  RtlCreateMemoryBlockLookaside(&v13, 0LL, qword_18019E7B8, qword_18019E7B0, qword_18019E7A8);
  if ( (byte_18019F981 & 4) != 0 )
    sub_180132378(v9, v8, v10, 3, (char)v13, v4, v3, v6);
  v11 = v13;
  *Context = v13;
  if ( (byte_18019F981 & 4) != 0 )
    sub_180132378(v9, v8, v10, 1, (char)v11, 0, 0, 0);
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
    byte_18019FBA1 = pvData != 0;
  LOBYTE(v7) = v11 != 0LL;
  return v7;
}

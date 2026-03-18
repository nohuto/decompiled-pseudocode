/*
 * XREFs of EngAllocUserMemEx @ 0x1C0063CE8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngAllocUserMem @ 0x1C00B6980 (EngAllocUserMem.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00626AC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v4; // edi
  __int64 v5; // rcx
  HANDLE v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r14
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF
  char v13; // [rsp+90h] [rbp+40h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v6 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
  if ( !v6 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
    *a3 = 0LL;
    return (unsigned int)-2143354876;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    Buffer[0] = *a3;
    Buffer[1] = RegionSize;
    LOBYTE(NewElement) = 0;
    Buffer[2] = v6;
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
    if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v8 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
      || !(_BYTE)NewElement )
    {
      MmUnsecureVirtualMemory(v6);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      v4 = -1073741801;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
    return (unsigned int)v4;
  }
  MmUnsecureVirtualMemory(v6);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
  *a3 = 0LL;
  return 3221225473LL;
}

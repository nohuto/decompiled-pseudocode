/*
 * XREFs of ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C0FC0
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF220 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800C05B4 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800C1788 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C17B0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcPrivateNamespace::Open(
        SipcPrivateNamespace *this,
        const struct SipcPrivateNamespaceAttributes *a2)
{
  int v4; // edx
  int BoundaryDescriptorAndInitializeName; // ebx
  char *v6; // rbx
  HANDLE v7; // rax
  wil::details::in1diag0 *v8; // rcx
  unsigned int LastError; // edi
  HANDLE BoundaryDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( !IsValidSid((char *)a2 + 16) || !IsValidSid((char *)a2 + 84) )
  {
    BoundaryDescriptorAndInitializeName = -2147024809;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, v4);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  *(_OWORD *)((char *)this + 84) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 164) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 212) = *((_OWORD *)a2 + 8);
  *(_QWORD *)((char *)this + 228) = *((_QWORD *)a2 + 18);
  BoundaryDescriptor = 0LL;
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                          this,
                                          &BoundaryDescriptor);
  if ( BoundaryDescriptorAndInitializeName < 0 )
  {
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  v6 = (char *)BoundaryDescriptor;
  v7 = OpenPrivateNamespaceW(BoundaryDescriptor, (LPCWSTR)this + 4);
  *(_QWORD *)this = v7;
  if ( v7 )
  {
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v6);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v8);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v6);
    return LastError;
  }
}

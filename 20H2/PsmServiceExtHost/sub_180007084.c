/*
 * XREFs of sub_180007084 @ 0x180007084
 * Callers:
 *     sub_18000CC4C @ 0x18000CC4C (sub_18000CC4C.c)
 * Callees:
 *     sub_180006F14 @ 0x180006F14 (sub_180006F14.c)
 *     sub_180006FF4 @ 0x180006FF4 (sub_180006FF4.c)
 *     sub_1800071C0 @ 0x1800071C0 (sub_1800071C0.c)
 *     sub_180007268 @ 0x180007268 (sub_180007268.c)
 *     sub_18000803C @ 0x18000803C (sub_18000803C.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007084(__int64 a1, __int64 a2, void *a3, _QWORD *a4)
{
  PVOID Heap; // rdi
  int v9; // r15d
  NTSTATUS v10; // ebx
  int ReturnLength; // [rsp+20h] [rbp-98h]
  ULONG v13; // [rsp+30h] [rbp-88h] BYREF
  PVOID v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  int v16; // [rsp+48h] [rbp-70h]
  char JobInformation[32]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+70h] [rbp-48h]

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &v13);
  v9 = v18;
  sub_180006F14(a1, a2, v18, (__int64)Heap);
  v10 = sub_180006FF4((__int64)Heap, a3);
  if ( v10 < 0 )
    goto LABEL_11;
  sub_18000803C(a1);
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
  {
    v10 = -1073741077;
    sub_180007268(a1);
    goto LABEL_11;
  }
  v15 = a2;
  v16 = v9;
  sub_180032190(a1 + 32, (unsigned int)&v15, (unsigned int)sub_180035740, (_DWORD)Heap, ReturnLength, (__int64)&v14);
  sub_180007268(a1);
  if ( v14 != Heap )
  {
    *a4 = v14;
    v10 = 0;
    goto LABEL_11;
  }
  v10 = sub_1800071C0(Heap);
  if ( v10 < 0 )
  {
LABEL_11:
    sub_1800274E0(Heap);
    return (unsigned int)v10;
  }
  *a4 = Heap;
  return 0;
}

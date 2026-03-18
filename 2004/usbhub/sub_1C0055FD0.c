/*
 * XREFs of sub_1C0055FD0 @ 0x1C0055FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 *     sub_1C005844C @ 0x1C005844C (sub_1C005844C.c)
 */

__int64 __fastcall sub_1C0055FD0(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  _DWORD *v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v10; // rdi
  ULONG Length; // ebp
  __int16 Size; // r14
  __int32 Status; // ebx
  __m128 *PoolWithTag; // rax
  __m128 *v15; // rdi
  unsigned int v16; // eax
  char *v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]

  v3 = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    HIDWORD(v22) = HIDWORD(a1);
    sub_1C002E62C((__int64)DeviceObject->DeviceExtension, (__int64)a2, 1u, 0x11u, (__int64)&unk_1C0065258);
  }
  v5 = sub_1C0011220(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v10 = v5;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C005844C(DeviceObject->DeviceExtension, v6, v7, v8, v21, a1, Length, Size);
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0065258);
      Status = v10[557] == 0 ? 0xC00000BB : 0;
      v3 = (unsigned __int64)(v10 + 556) & -(__int64)(v10[557] != 0);
    }
  }
  else
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x14u, (__int64)&unk_1C0065258);
    if ( !*((_BYTE *)v10 + 1415) || (v10[358] & 0x800) != 0 )
    {
      if ( v10[549] )
      {
        v3 = (__int64)(v10 + 548);
        Status = 0;
        goto LABEL_32;
      }
      Status = -1073741637;
    }
    else
    {
      v3 = (__int64)(v10 + 540);
      Status = sub_1C0051210(*((_QWORD *)v10 + 148), a1, Size, (__int64)(v10 + 540));
      if ( Status == -1073741637 && Size != 1033 )
        Status = sub_1C0051210(*((_QWORD *)v10 + 148), *((_QWORD *)v10 + 105), 0x409u, (__int64)(v10 + 540));
      if ( (Status & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(Status) )
        sub_1C004A608(*((_QWORD *)v10 + 148), *((_WORD *)v10 + 714), 0x3Au, 0LL, 0, Status, 0, aPdoC, 2351, 0);
      if ( Status < 0 )
        goto LABEL_41;
    }
  }
  if ( Status < 0 )
    goto LABEL_41;
LABEL_32:
  if ( !v3 )
    goto LABEL_41;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(v3 + 4), 0x42554855u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_40:
    Status = -1073741670;
    goto LABEL_41;
  }
  sub_1C001D340(PoolWithTag, 0, *(unsigned int *)(v3 + 4));
  v16 = *(_DWORD *)(v3 + 4);
  if ( !v16 || (v17 = *(char **)(v3 + 8)) == 0LL )
  {
    ExFreePoolWithTag(v15, 0);
    goto LABEL_40;
  }
  sub_1C001D080((char *)v15, v17, v16);
  a2->IoStatus.Information = (ULONG_PTR)v15;
  if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
    goto LABEL_44;
  if ( LOWORD(DeviceObject->DeviceType) )
    sub_1C003B2A0(DeviceObject->DeviceExtension, v18, v19, 21, (__int64)&unk_1C0065258, (__int64)v15);
LABEL_41:
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v22) = Status;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)&unk_1C0065258, v22);
  }
LABEL_44:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}

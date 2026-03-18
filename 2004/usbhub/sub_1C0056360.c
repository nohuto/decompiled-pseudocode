/*
 * XREFs of sub_1C0056360 @ 0x1C0056360
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0055C3C @ 0x1C0055C3C (sub_1C0055C3C.c)
 *     sub_1C005A314 @ 0x1C005A314 (sub_1C005A314.c)
 *     sub_1C005B78C @ 0x1C005B78C (sub_1C005B78C.c)
 */

__int64 __fastcall sub_1C0056360(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  _DWORD *v5; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // ebp
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 Length; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  __m128 *PoolWithTag; // rax
  __m128 *v20; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0LL;
  v5 = sub_1C0011220(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v8 = v5;
  sub_1C005A314(v9, a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (_DWORD)Length )
  {
    Length = (unsigned int)(Length - 1);
    if ( (_DWORD)Length )
    {
      Length = (unsigned int)(Length - 1);
      if ( (_DWORD)Length )
      {
        Length = (unsigned int)(Length - 1);
        if ( (_DWORD)Length )
        {
          if ( (_DWORD)Length == 2 )
          {
            if ( *((_BYTE *)v8 + 2732) )
            {
              GuidString = 0LL;
              Status = RtlStringFromGUID((const GUID *const)(v8 + 679), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (ULONG_PTR)GuidString.Buffer;
              }
            }
          }
          goto LABEL_9;
        }
        if ( *((_QWORD *)v8 + 267) )
        {
          v13 = 532LL;
          v3 = (v8[355] & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v13 = 536LL;
        }
      }
      else
      {
        v13 = 528LL;
      }
    }
    else
    {
      v13 = 524LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v14 = sub_1C0011220(a1);
      v15 = (_QWORD *)sub_1C0004060(*((_QWORD *)v8 + 148), (__int64)(v14 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject(v8 + 724, Executive, 0, 0, 0LL);
      sub_1C0055C3C(a1);
      KeSetEvent((PRKEVENT)(v8 + 724), 0, 0);
      sub_1C0011220(a1);
      sub_1C0003610(*((_QWORD *)v8 + 148), v16, v15);
    }
    v13 = 520LL;
  }
  v17 = &v8[v13];
  if ( !&v8[v13] || (v18 = (unsigned int)v17[1], !(_DWORD)v18) || !*((_QWORD *)v17 + 1) )
  {
LABEL_9:
    if ( !CurrentStackLocation->Parameters.Read.Length )
      Status = -1073741670;
    v11 = Status;
    goto LABEL_12;
  }
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v3 + v18, 0x42554855u);
  v20 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, v3 + (unsigned int)v17[1]);
    if ( v3 )
    {
      v20->m128_u64[0] = 0x5400460053004DLL;
      v20->m128_i32[2] = 3145779;
    }
    sub_1C001D080((char *)v20 + v3, *((char **)v17 + 1), (unsigned int)v17[1]);
    a2->IoStatus.Information = (ULONG_PTR)v20;
    v11 = 0;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_12:
  sub_1C005B78C(Length, a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x10u, (__int64)&unk_1C0065258, v11);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return v11;
}

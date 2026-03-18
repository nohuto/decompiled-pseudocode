/*
 * XREFs of sub_1C0056620 @ 0x1C0056620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004BFCC @ 0x1C004BFCC (sub_1C004BFCC.c)
 *     sub_1C004C050 @ 0x1C004C050 (sub_1C004C050.c)
 */

__int64 __fastcall sub_1C0056620(__int64 a1, IRP *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int Status; // ebp
  __int64 v8; // r12
  struct _DEVICE_OBJECT *v9; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  SIZE_T v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  LARGE_INTEGER ByteOffset; // rax
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // r10d
  __int32 v22; // r10d
  struct _NAMED_PIPE_CREATE_PARAMETERS *v23; // r10
  __int64 v24; // r10

  v4 = sub_1C0011220(a1);
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732848, (__int64)a2, a1);
  v5 = *((_QWORD *)v4 + 148);
  v6 = 0;
  Status = a2->IoStatus.Status;
  if ( !v5 )
    goto LABEL_42;
  v8 = sub_1C0016B5C(v5, *((_WORD *)v4 + 714), (__int64)a2, 0x51554946u);
  if ( !v8 )
    goto LABEL_42;
  v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)sub_1C000F050(*((_QWORD *)v4 + 148)) + 152);
  if ( !v9 || sub_1C0011220(a1)[281] != 3 )
  {
    sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902522657, (__int64)a2, a1);
    goto LABEL_41;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062938, 0x10uLL) == 16 )
  {
    sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902728019, (__int64)a2, a1);
    v12 = sub_1C004C050(*((_QWORD *)v4 + 148), v11, (__int64)a2);
LABEL_9:
    Status = v12;
LABEL_41:
    sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
LABEL_42:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062B68, 0x10uLL) == 16 )
  {
    v12 = sub_1C004BFCC(v13, a1, (__int64)a2);
    goto LABEL_9;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062968, 0x10uLL) != 16
    && RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062AD0, 0x10uLL) != 16
    && RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062750, 0x10uLL) != 16
    && RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062B58, 0x10uLL) != 16 )
  {
    v14 = RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &unk_1C0062730, 0x10uLL);
    v15 = *((_QWORD *)v4 + 148);
    if ( v14 != 16 )
    {
      sub_1C000FD80(v15, 256, 1902732852, (__int64)a2, a1);
      goto LABEL_41;
    }
    sub_1C000FD80(v15, 256, 1902732853, (__int64)a2, a1);
    if ( CurrentStackLocation->Parameters.CreatePipe.Parameters == (PNAMED_PIPE_CREATE_PARAMETERS)v4 )
    {
      sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
      v16 = a2->IoStatus.Status;
      IofCompleteRequest(a2, 0);
      return v16;
    }
    if ( CurrentStackLocation->Parameters.QueryInterface.Size != 72
      || CurrentStackLocation->Parameters.QueryInterface.Version != 1 )
    {
      sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
      v6 = a2->IoStatus.Status;
      goto LABEL_28;
    }
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)ByteOffset.QuadPart = 65608;
    }
    else
    {
      if ( *(_WORD *)ByteOffset.QuadPart != 72 || *(_WORD *)(ByteOffset.QuadPart + 2) != 1 )
      {
        sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
        v6 = -1073741637;
LABEL_24:
        a2->IoStatus.Status = v6;
LABEL_28:
        IofCompleteRequest(a2, 0);
        return v6;
      }
      *((_OWORD *)v4 + 186) = *(_OWORD *)ByteOffset.QuadPart;
      *((_OWORD *)v4 + 187) = *(_OWORD *)(ByteOffset.QuadPart + 16);
      *((_OWORD *)v4 + 188) = *(_OWORD *)(ByteOffset.QuadPart + 32);
      *((_OWORD *)v4 + 189) = *(_OWORD *)(ByteOffset.QuadPart + 48);
      *((_QWORD *)v4 + 380) = *(_QWORD *)(ByteOffset.QuadPart + 64);
    }
    *(_QWORD *)(ByteOffset.QuadPart + 8) = v4;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = sub_1C0054900;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = sub_1C0073760;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = sub_1C0054820;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = sub_1C00548D0;
    *(_QWORD *)(ByteOffset.QuadPart + 48) = sub_1C0073730;
    *(_QWORD *)(ByteOffset.QuadPart + 56) = sub_1C0054850;
    *(_QWORD *)(ByteOffset.QuadPart + 64) = sub_1C0054870;
    sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
    goto LABEL_24;
  }
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732850, (__int64)a2, a1);
  if ( sub_1C0015C80(*((_QWORD *)v4 + 148), a1, (__int64)a2, 0x48446671u) )
    goto LABEL_37;
  v19 = sub_1C0011220(a1);
  v20 = sub_1C00162A8(*((PDEVICE_OBJECT *)v4 + 148), (__int64)(v19 + 236), a1);
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732882, (__int64)a2, v20);
  if ( (v21 & 0xC0000000) != 0xC0000000 )
  {
    sub_1C0015C80(*((_QWORD *)v4 + 148), a1, (__int64)a2, 0x48446671u);
    sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732872, *((_QWORD *)v4 + 145), a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = v23;
LABEL_37:
    sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732872, *((_QWORD *)v4 + 145), a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v24;
    if ( v24 )
      sub_1C0016670(*((_QWORD *)v4 + 148), v24, (__int64)a2, 0x48446671u);
    sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1902732851, (__int64)a2, a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    Status = IofCallDriver(v9, a2);
    goto LABEL_35;
  }
  if ( !sub_1C001CEB4(v21) )
    sub_1C004A608(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x79u, 0LL, 0, v22, -1, aPdoC, 535, 0);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
LABEL_35:
  sub_1C00171A0(*((_QWORD *)v4 + 148), v8, (__int64)a2, 0x51554946u);
  return Status;
}

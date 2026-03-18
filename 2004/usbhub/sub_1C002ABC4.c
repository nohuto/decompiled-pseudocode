/*
 * XREFs of sub_1C002ABC4 @ 0x1C002ABC4
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C002ABC4(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  char v3; // si
  PDEVICE_OBJECT *v7; // r12
  _DWORD *v8; // rbx
  __int64 v9; // rbp
  PIO_SECURITY_CONTEXT SecurityContext; // r13
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v15; // r10d
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0;
  v17 = 0;
  v7 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v8 = sub_1C0011220(a2);
  v9 = sub_1C0016CA0(a1, *((_WORD *)v8 + 714));
  sub_1C000FD80(a1, 8, 1667973963, v9, *((unsigned __int16 *)v8 + 714));
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v7 + 340) == 5 )
  {
    if ( v9 )
    {
      v13 = sub_1C000A080(a1, *(_WORD *)(v9 + 4), (__int64)&v17, &v16);
      v3 = v17;
      v11 = v13;
      v12 = v16;
    }
    else
    {
      v11 = -1073741811;
      v12 = -2147482880;
    }
  }
  else
  {
    v11 = -1073741810;
    v12 = -1073713152;
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(SecurityContext->SecurityQos) = v12;
    a3->IoStatus.Status = v11;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    sub_1C000FD80(a1, 8, 1667973937, v9, (int)v11);
    return v11;
  }
  if ( (v3 & 1) != 0 && (v3 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v11 = IofCallDriver(v7[152], a3);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return v11;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073713152;
  a3->IoStatus.Status = -1073741810;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  sub_1C000FD80(a1, 8, 1667973938, v9, -1073741810LL);
  return v15;
}

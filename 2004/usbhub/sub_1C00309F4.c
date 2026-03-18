/*
 * XREFs of sub_1C00309F4 @ 0x1C00309F4
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C005A4F0 @ 0x1C005A4F0 (sub_1C005A4F0.c)
 */

__int64 __fastcall sub_1C00309F4(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  PIO_SECURITY_CONTEXT SecurityContext; // rbx
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  char *v12; // rcx

  v6 = sub_1C0011220(a2);
  v7 = sub_1C000F050(a1);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext && LODWORD(SecurityContext->SecurityQos) == 1 )
  {
    if ( HIDWORD(SecurityContext->SecurityQos) == 204 )
    {
      sub_1C001D340((__m128 *)((char *)&SecurityContext->AccessState + 4), 0, 0xC0uLL);
      LODWORD(SecurityContext->AccessState) = 0;
      v10 = 0;
      LODWORD(SecurityContext->SecurityQos) = 1;
      HIDWORD(SecurityContext->SecurityQos) = 204;
      v11 = v7[640];
      if ( (v11 & 0x8000) != 0 )
      {
        LODWORD(SecurityContext->AccessState) = 1;
        v10 = 1;
        v11 = v7[640];
      }
      if ( (v11 & 0x80u) != 0 )
      {
        v10 |= 8u;
        LODWORD(SecurityContext->AccessState) = v10;
        v11 = v7[640];
      }
      if ( (v11 & 0x10000) != 0 )
      {
        v10 |= 4u;
        LODWORD(SecurityContext->AccessState) = v10;
        v11 = v7[640];
      }
      if ( (v11 & 0x8001) == 0x8001 || (v11 & 0x40) != 0 )
      {
        v10 |= 2u;
        LODWORD(SecurityContext->AccessState) = v10;
        v11 = v7[640];
      }
      if ( (v11 & 0x80000) != 0 )
      {
        v10 |= 0x20u;
        LODWORD(SecurityContext->AccessState) = v10;
        v11 = v7[640];
      }
      if ( (v11 & 1) != 0 )
      {
        v10 |= 0x10u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( v7[758] == 100 )
        LODWORD(SecurityContext->AccessState) = v10 | 0x40;
      if ( (v6[355] & 0x10000) != 0 )
      {
        HIDWORD(SecurityContext[5].AccessState) |= 1u;
        *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 650);
        *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 654);
        *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 658);
        *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 662);
        LODWORD(SecurityContext[8].AccessState) = v6[666];
      }
      v9 = sub_1C005A4F0((char *)&SecurityContext[1].SecurityQos + 4, v6 + 528);
      if ( v9 >= 0 )
      {
        v9 = sub_1C005A4F0((char *)&SecurityContext->AccessState + 4, v6 + 524);
        if ( v9 >= 0 )
        {
          v9 = sub_1C005A4F0(&SecurityContext[1].FullCreateOptions, v6 + 552);
          if ( v9 >= 0 )
            goto LABEL_29;
          sub_1C0050D40((char *)&SecurityContext[1].SecurityQos + 4);
          v12 = (char *)&SecurityContext->AccessState + 4;
        }
        else
        {
          v12 = (char *)&SecurityContext[1].SecurityQos + 4;
        }
        sub_1C0050D40(v12);
      }
    }
    else
    {
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_29:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return (unsigned int)v9;
}

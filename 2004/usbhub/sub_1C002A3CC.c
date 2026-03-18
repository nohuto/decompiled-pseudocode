/*
 * XREFs of sub_1C002A3CC @ 0x1C002A3CC
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 */

__int64 __fastcall sub_1C002A3CC(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  PIO_SECURITY_CONTEXT SecurityContext; // rbp
  PSECURITY_QUALITY_OF_SERVICE SecurityQos; // rcx
  unsigned int v10; // edi
  char *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  unsigned int AccessState_high; // ecx
  unsigned int v15; // ebx
  int v16; // eax

  v5 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v6 = sub_1C0011220(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[706] & 2) != 0 )
    {
      SecurityQos = SecurityContext[2].SecurityQos;
      v10 = 0;
      if ( SecurityQos )
      {
        if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
          v11 = *(char **)&SecurityQos[2].Length;
        else
          v11 = (char *)MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, dword_1C006B718 | 0x10u);
      }
      else
      {
        v11 = *(char **)&SecurityContext[1].DesiredAccess;
      }
      if ( v11 )
      {
        v13 = *((_QWORD *)v7 + 355);
        AccessState_high = *(unsigned __int16 *)(v13 + 8);
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v15 = AccessState_high;
        sub_1C001D080(v11, (char *)v13, AccessState_high);
        v12 = 0;
        HIDWORD(SecurityContext[1].AccessState) = v15;
      }
      else
      {
        v10 = -1073741811;
        v12 = -2147482880;
      }
      HIDWORD(SecurityContext->SecurityQos) = v12;
      goto LABEL_17;
    }
LABEL_16:
    HIDWORD(SecurityContext->SecurityQos) = -1073738240;
    v10 = -1073741637;
LABEL_17:
    a3->IoStatus.Status = v10;
    IofCompleteRequest(a3, 0);
    goto LABEL_18;
  }
  v16 = v6[358];
  if ( (v16 & 0x400) == 0 )
    goto LABEL_16;
  BYTE1(SecurityContext[5].AccessState) = v16;
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v10 = IofCallDriver(v5[152], a3);
LABEL_18:
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v10;
}

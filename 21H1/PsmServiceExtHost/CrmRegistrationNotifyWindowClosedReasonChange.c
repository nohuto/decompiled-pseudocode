/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002E228
 * Callers:
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 *     CrmActivityListenerCallback @ 0x1800304B0 (CrmActivityListenerCallback.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003D3BC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

char __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  char result; // al
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-79h] BYREF
  int v15; // [rsp+34h] [rbp-75h] BYREF
  int v16; // [rsp+38h] [rbp-71h] BYREF
  int v17; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v18; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-59h] BYREF
  UUID *v21; // [rsp+70h] [rbp-39h]
  int v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+7Ch] [rbp-2Dh]
  int *v24; // [rsp+80h] [rbp-29h]
  int v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+8Ch] [rbp-1Dh]
  __int64 v27; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+9Ch] [rbp-Dh]
  int *v30; // [rsp+A0h] [rbp-9h]
  int v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+ACh] [rbp+3h]
  __int64 *v33; // [rsp+B0h] [rbp+7h]
  int v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+BCh] [rbp+13h]
  int *v36; // [rsp+C0h] [rbp+17h]
  int v37; // [rsp+C8h] [rbp+1Fh]
  int v38; // [rsp+CCh] [rbp+23h]
  int *v39; // [rsp+D0h] [rbp+27h]
  int v40; // [rsp+D8h] [rbp+2Fh]
  int v41; // [rsp+DCh] [rbp+33h]

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 56) == 17 )
  {
    v8 = 255;
    v14 = 255;
    if ( !*(_DWORD *)(a2 + 96) )
    {
LABEL_20:
      result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 128), 0LL, &v14, 4LL, 0LL);
      v2 = &v14;
      goto LABEL_3;
    }
    v9 = *(_QWORD *)(a2 + 104);
    v10 = *(unsigned int *)(a2 + 96);
    v11 = (_DWORD *)(v9 + 32);
    while ( 1 )
    {
      if ( v11[4] )
      {
        switch ( *v11 )
        {
          case 7:
            v8 &= ~1u;
            break;
          case 9:
            v8 &= ~2u;
            break;
          case 0x10:
            v8 &= ~4u;
            break;
          case 0x13:
            v8 &= ~8u;
            break;
          case 0x14:
            v8 &= ~0x10u;
            break;
          case 0x15:
            v8 &= ~0x20u;
            break;
          case 0x16:
            v8 &= ~0x40u;
            break;
          case 0x1A:
            v8 &= ~0x80u;
            break;
          default:
            goto LABEL_19;
        }
        v14 = v8;
      }
LABEL_19:
      v11 += 14;
      if ( !--v10 )
        goto LABEL_20;
    }
  }
  result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 128), 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1800B3250, 2LL);
    if ( result )
    {
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v21 = &Uuid;
      v15 = *(_DWORD *)(a1 + 24);
      v24 = &v15;
      v27 = a1 + 72;
      v12 = *(unsigned __int8 *)(a1 + 73);
      v22 = 16;
      v25 = 4;
      v31 = 4;
      v34 = 8;
      v28 = 4 * v12 + 8;
      v16 = *(_DWORD *)(a2 + 56);
      v30 = &v16;
      v19 = *(_QWORD *)(a2 + 48);
      v33 = &v19;
      if ( v2 )
        v13 = *v2;
      else
        v13 = 0;
      v38 = 0;
      v41 = 0;
      v17 = v13;
      v36 = &v17;
      v39 = &v18;
      v18 = v7;
      v37 = 4;
      v40 = 4;
      return tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800A2F2B, 0LL, 0LL, 9u, &v20);
    }
  }
  return result;
}

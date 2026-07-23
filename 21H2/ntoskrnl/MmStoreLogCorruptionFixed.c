/*
 * XREFs of MmStoreLogCorruptionFixed @ 0x140554D40
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14059BB04 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogCorruptionFixed(char *a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  PHYSICAL_ADDRESS v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // [rsp+20h] [rbp-A9h]
  int v11; // [rsp+28h] [rbp-A1h]
  int v12; // [rsp+40h] [rbp-89h] BYREF
  int v13; // [rsp+44h] [rbp-85h] BYREF
  char *v14; // [rsp+48h] [rbp-81h] BYREF
  PHYSICAL_ADDRESS v15; // [rsp+50h] [rbp-79h] BYREF
  __int64 v16; // [rsp+58h] [rbp-71h] BYREF
  __int64 v17; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-59h] BYREF
  char **v19; // [rsp+90h] [rbp-39h]
  int v20; // [rsp+98h] [rbp-31h]
  int v21; // [rsp+9Ch] [rbp-2Dh]
  int *v22; // [rsp+A0h] [rbp-29h]
  int v23; // [rsp+A8h] [rbp-21h]
  int v24; // [rsp+ACh] [rbp-1Dh]
  int *v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B8h] [rbp-11h]
  int v27; // [rsp+BCh] [rbp-Dh]
  PHYSICAL_ADDRESS *v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]
  int v30; // [rsp+CCh] [rbp+3h]
  __int64 *v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]
  __int64 *v34; // [rsp+E0h] [rbp+17h]
  int v35; // [rsp+E8h] [rbp+1Fh]
  int v36; // [rsp+ECh] [rbp+23h]

  v4 = a2;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    v6.QuadPart = MmGetPhysicalAddress(a1).QuadPart / 4096;
    if ( ((v4 + 4095 + ((unsigned __int16)a1 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 )
      MmGetPhysicalAddress(&a1[(unsigned int)(v4 - 1)]);
    if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000002LL) )
      {
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v19 = &v14;
        v22 = &v12;
        v25 = &v13;
        v28 = &v15;
        v31 = &v16;
        v34 = &v17;
        v16 = v8;
        v20 = 8;
        v23 = 4;
        v26 = 4;
        v29 = 8;
        v32 = 8;
        v35 = 8;
        v14 = a1;
        v12 = v4;
        v13 = a3;
        v15 = v6;
        v17 = 0x1000000LL;
        tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&byte_140026D29, v7, 1u, v10, v11, 8u, &v18);
      }
    }
  }
}

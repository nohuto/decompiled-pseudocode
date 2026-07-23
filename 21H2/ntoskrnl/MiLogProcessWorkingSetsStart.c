/*
 * XREFs of MiLogProcessWorkingSetsStart @ 0x140286424
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStart(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  ULONG v4; // edx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // r11
  char v9; // al
  __int64 v10; // rax
  __int16 v11; // cx
  int v12; // [rsp+20h] [rbp-118h]
  int v13; // [rsp+28h] [rbp-110h]
  char v14; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v15; // [rsp+44h] [rbp-F4h] BYREF
  int v16; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-B8h] BYREF
  char *v23; // [rsp+A0h] [rbp-98h]
  ULONG v24; // [rsp+A8h] [rbp-90h]
  int v25; // [rsp+ACh] [rbp-8Ch]
  __int16 *v26; // [rsp+B0h] [rbp-88h]
  int v27; // [rsp+B8h] [rbp-80h]
  int v28; // [rsp+BCh] [rbp-7Ch]
  int *v29; // [rsp+C0h] [rbp-78h]
  int v30; // [rsp+C8h] [rbp-70h]
  int v31; // [rsp+CCh] [rbp-6Ch]
  __int64 *v32; // [rsp+D0h] [rbp-68h]
  int v33; // [rsp+D8h] [rbp-60h]
  int v34; // [rsp+DCh] [rbp-5Ch]
  __int64 *v35; // [rsp+E0h] [rbp-58h]
  int v36; // [rsp+E8h] [rbp-50h]
  int v37; // [rsp+ECh] [rbp-4Ch]
  __int64 *v38; // [rsp+F0h] [rbp-48h]
  int v39; // [rsp+F8h] [rbp-40h]
  int v40; // [rsp+FCh] [rbp-3Ch]
  __int64 *v41; // [rsp+100h] [rbp-38h]
  int v42; // [rsp+108h] [rbp-30h]
  int v43; // [rsp+10Ch] [rbp-2Ch]
  __int64 *v44; // [rsp+110h] [rbp-28h]
  int v45; // [rsp+118h] [rbp-20h]
  int v46; // [rsp+11Ch] [rbp-1Ch]

  v3 = a3;
  if ( *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140C4EF20, 1LL, a3, a2) )
    {
      v9 = *(_BYTE *)(v6 + 2);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v14 = v9;
      v23 = &v14;
      v10 = v8[856];
      v24 = v4;
      v27 = 2;
      v16 = v3;
      v11 = *(_WORD *)(v10 + 2346);
      v26 = &v15;
      v29 = &v16;
      v17 = *(_QWORD *)(v6 + 80);
      v32 = &v17;
      v18 = *(_QWORD *)(v6 + 72);
      v15 = v11;
      v35 = &v18;
      v19 = v8[888];
      v38 = &v19;
      v20 = v8[936];
      v41 = &v20;
      v21 = v8[950];
      v44 = &v21;
      v33 = 8;
      v36 = 8;
      v39 = 8;
      v42 = 8;
      v45 = 8;
      v30 = 4;
      tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)&dword_140025E8D, v5, v4, v12, v13, 0xAu, &v22);
    }
  }
}

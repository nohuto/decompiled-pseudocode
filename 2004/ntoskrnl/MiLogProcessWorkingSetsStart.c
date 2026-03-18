/*
 * XREFs of MiLogProcessWorkingSetsStart @ 0x14026C4E4
 * Callers:
 *     MiProcessWorkingSets @ 0x1402036D0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStart(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r9
  int v7; // r10d
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
  __int64 v22[5]; // [rsp+80h] [rbp-B8h] BYREF
  int v23; // [rsp+A8h] [rbp-90h]
  int v24; // [rsp+ACh] [rbp-8Ch]
  __int16 *v25; // [rsp+B0h] [rbp-88h]
  int v26; // [rsp+B8h] [rbp-80h]
  int v27; // [rsp+BCh] [rbp-7Ch]
  int *v28; // [rsp+C0h] [rbp-78h]
  int v29; // [rsp+C8h] [rbp-70h]
  int v30; // [rsp+CCh] [rbp-6Ch]
  __int64 *v31; // [rsp+D0h] [rbp-68h]
  int v32; // [rsp+D8h] [rbp-60h]
  int v33; // [rsp+DCh] [rbp-5Ch]
  __int64 *v34; // [rsp+E0h] [rbp-58h]
  int v35; // [rsp+E8h] [rbp-50h]
  int v36; // [rsp+ECh] [rbp-4Ch]
  __int64 *v37; // [rsp+F0h] [rbp-48h]
  int v38; // [rsp+F8h] [rbp-40h]
  int v39; // [rsp+FCh] [rbp-3Ch]
  __int64 *v40; // [rsp+100h] [rbp-38h]
  int v41; // [rsp+108h] [rbp-30h]
  int v42; // [rsp+10Ch] [rbp-2Ch]
  __int64 *v43; // [rsp+110h] [rbp-28h]
  int v44; // [rsp+118h] [rbp-20h]
  int v45; // [rsp+11Ch] [rbp-1Ch]

  v3 = a3;
  if ( *(_QWORD *)&qword_140C4ECE0 && **(_DWORD **)&qword_140C4ECE0 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140C4ECE0, 1LL, a3, a2) )
    {
      v9 = *(_BYTE *)(v6 + 2);
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v14 = v9;
      v22[4] = (__int64)&v14;
      v10 = v8[856];
      v23 = v4;
      v26 = 2;
      v16 = v3;
      v11 = *(_WORD *)(v10 + 2346);
      v25 = &v15;
      v28 = &v16;
      v17 = *(_QWORD *)(v6 + 80);
      v31 = &v17;
      v18 = *(_QWORD *)(v6 + 72);
      v15 = v11;
      v34 = &v18;
      v19 = v8[888];
      v37 = &v19;
      v20 = v8[936];
      v40 = &v20;
      v21 = v8[950];
      v43 = &v21;
      v32 = 8;
      v35 = 8;
      v38 = 8;
      v41 = 8;
      v44 = 8;
      v29 = 4;
      tlgWriteEx_EtwWriteEx(v7, (int)&byte_140024DBF, v5, v4, v12, v13, 0xAu, (__int64)v22);
    }
  }
}

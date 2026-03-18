/*
 * XREFs of ?redloop@@YAHXZ @ 0x1C00EA7E8
 * Callers:
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00EA650 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@@YAHH@Z @ 0x1C00EA930 (-greenloop@@YAHH@Z.c)
 */

__int64 redloop(void)
{
  int v0; // r14d
  unsigned int v1; // ebx
  __int64 v2; // r13
  int v3; // edi
  __int64 v4; // r12
  int v5; // ebp
  int v6; // r15d
  int v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // ecx

  v0 = dword_1C033AE34;
  v1 = 0;
  v2 = qword_1C033AE60;
  v3 = dword_1C033AE34;
  v4 = qword_1C033AE78;
  v5 = dword_1C033AE40;
  v6 = dword_1C033AE4C;
  v7 = 1;
  dword_1C033AE3C = dword_1C033AE40;
  v8 = dword_1C033AE4C;
  qword_1C033AE58 = qword_1C033AE60;
  for ( qword_1C033AE70 = qword_1C033AE78; v3 < 32; v7 = 0 )
  {
    if ( (unsigned int)greenloop(v7) )
    {
      v1 = 1;
    }
    else if ( v1 )
    {
      break;
    }
    dword_1C033AE3C += v8;
    ++v3;
    qword_1C033AE58 += 4096LL;
    v8 += 128;
    qword_1C033AE70 += 1024LL;
  }
  v9 = v6 - 128;
  dword_1C033B0C8 = v6 - 128;
  dword_1C033AE3C = v5 - (v6 - 128);
  v10 = v0 - 1;
  qword_1C033AE58 = v2 - 4096;
  qword_1C033AE70 = v4 - 1024;
  v11 = 1;
  if ( v0 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)greenloop(v11) )
      {
        v1 = 1;
      }
      else if ( v1 )
      {
LABEL_13:
        dword_1C033B0C8 = v9;
        return v1;
      }
      qword_1C033AE58 -= 4096LL;
      v9 -= 128;
      dword_1C033AE3C -= v9;
      v11 = 0;
      qword_1C033AE70 -= 1024LL;
      if ( --v10 < 0 )
        goto LABEL_13;
    }
  }
  return v1;
}

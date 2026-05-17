/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800E5790
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18005BF30 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  _BYTE *v8; // r10
  unsigned int *v9; // r8
  int v10; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // edi
  unsigned int *v20; // r8
  __int64 v21; // rax
  __int16 v22; // si
  unsigned int v23; // eax
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a3;
  v8 = a2;
  if ( *(_WORD *)a1 == 0xFDE9 )
  {
    v9 = (unsigned int *)&v24;
    if ( a4 )
      v9 = a4;
    if ( a6 )
    {
      v10 = RtlUnicodeToUTF8N(a2, v7, v9, a5, a6);
    }
    else
    {
      *v9 = 0;
      v10 = 0;
    }
    if ( v10 == -1073741789 )
      return (unsigned int)-2147483643;
    return v6;
  }
  else
  {
    v12 = a6 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v19 = (int)v8;
      if ( v12 )
      {
        v20 = a5;
        do
        {
          if ( !v7 )
            break;
          v21 = *(unsigned __int16 *)v20;
          v20 = (unsigned int *)((char *)v20 + 2);
          v22 = *(_WORD *)(v18 + 2 * v21);
          if ( HIBYTE(v22) )
          {
            v23 = v7--;
            if ( v23 < 2 )
              break;
            *v8++ = HIBYTE(v22);
          }
          *v8 = v22;
          --v7;
          ++v8;
          --v12;
        }
        while ( v12 );
      }
      if ( a4 )
        *a4 = (_DWORD)v8 - v19;
    }
    else
    {
      v13 = a3;
      if ( v12 < a3 )
        v13 = a6 >> 1;
      if ( a4 )
        *a4 = v13;
      v14 = *(_QWORD *)(a1 + 40);
      if ( v13 )
      {
        v15 = a5;
        v16 = v13;
        do
        {
          v17 = *(unsigned __int16 *)v15;
          v15 = (unsigned int *)((char *)v15 + 2);
          *v8++ = *(_BYTE *)(v17 + v14);
          --v16;
        }
        while ( v16 );
      }
    }
    return v7 < v12 ? 0x80000005 : 0;
  }
}

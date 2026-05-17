/*
 * XREFs of RtlStringCopyWorkerW_1 @ 0x4B330E59
 * Callers:
 *     _RtlStringCchCopyExW@24 @ 0x4B330DC4 (_RtlStringCchCopyExW@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringCopyWorkerW_1(_WORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  int v7; // esi
  __int16 v8; // bx
  int v9; // edx

  v5 = 0;
  if ( !a2 )
    goto LABEL_7;
  v6 = 2147483646;
  v7 = a4 - (_DWORD)a1;
  do
  {
    if ( !v6 )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --v6;
    ++v5;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_7:
    --a1;
    --v5;
  }
  *a1 = 0;
  v9 = a2 != 0 ? 0x7FFFFFFB : 0;
  if ( a3 )
    *a3 = v5;
  return v9 - 2147483643;
}

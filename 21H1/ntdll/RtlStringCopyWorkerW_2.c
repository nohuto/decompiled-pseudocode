/*
 * XREFs of RtlStringCopyWorkerW_2 @ 0x4B338366
 * Callers:
 *     _RtlStringCchCopyNExW@28 @ 0x4B3382E0 (_RtlStringCchCopyNExW@28.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringCopyWorkerW_2(_WORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // eax
  int v7; // esi
  __int16 v8; // bx
  int v9; // edx

  v5 = 0;
  if ( !a2 )
    goto LABEL_7;
  v7 = a4 - (_DWORD)a1;
  do
  {
    if ( !a5 )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --a5;
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

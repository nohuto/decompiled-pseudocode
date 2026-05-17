/*
 * XREFs of RtlStringCopyWorkerW @ 0x4B2A7692
 * Callers:
 *     _RtlStringCbCopyExW@24 @ 0x4B2A763E (_RtlStringCbCopyExW@24.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlStringCopyWorkerW(_WORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  __int16 v7; // ax
  int v8; // edx

  v4 = 0;
  v5 = 32;
  v6 = a3 - (_DWORD)this;
  do
  {
    if ( v5 == -2147483614 )
      break;
    v7 = *(_WORD *)((char *)this + v6);
    if ( !v7 )
      break;
    *this++ = v7;
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
  {
    --this;
    --v4;
  }
  *this = 0;
  v8 = v5 != 0 ? 0x7FFFFFFB : 0;
  if ( a2 )
    *a2 = v4;
  return v8 - 2147483643;
}

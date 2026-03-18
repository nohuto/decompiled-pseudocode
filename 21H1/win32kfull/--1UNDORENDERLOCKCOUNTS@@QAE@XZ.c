/*
 * XREFs of ??1UNDORENDERLOCKCOUNTS@@QAE@XZ @ 0x7B8E2
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 * Callees:
 *     <none>
 */

void __thiscall UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 52) = *(_DWORD *)this;
    *(_DWORD *)(*((_DWORD *)this + 2) + 56) = *((_DWORD *)this + 1);
  }
}

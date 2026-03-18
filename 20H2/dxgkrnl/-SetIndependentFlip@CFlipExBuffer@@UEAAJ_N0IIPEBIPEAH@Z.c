/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001D280
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C001D318 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001D444 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C006621C (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 */

int __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        int *a7)
{
  int result; // eax
  int v10; // ecx
  char v11; // di

  result = 0;
  *a7 = 0;
  v10 = *((_DWORD *)this + 88);
  if ( a2 )
  {
    v11 = *((_BYTE *)this + 569);
    if ( !v10 )
    {
      v11 = 1;
      if ( *((_BYTE *)this + 40) )
      {
        result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, a6, a7);
        goto LABEL_5;
      }
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 141) != a4 )
    {
      if ( v10 < 1 || !*((_BYTE *)this + 40) )
      {
LABEL_9:
        result = -1073741823;
        goto LABEL_5;
      }
      result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(this, a4, a5, a6, a7);
    }
LABEL_5:
    *((_BYTE *)this + 569) = a3;
    if ( v11 )
    {
      if ( !a3 )
        *((_BYTE *)this + 570) = 1;
    }
    return result;
  }
  if ( v10 )
    return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, a7);
  return result;
}

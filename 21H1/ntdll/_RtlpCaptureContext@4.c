/*
 * XREFs of _RtlpCaptureContext@4 @ 0x4B308850
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 * Callees:
 *     <none>
 */

_DWORD *__userpurge RtlpCaptureContext@<eax>(_DWORD *a1@<ebp>, int a2)
{
  unsigned int v3; // kr00_4
  _DWORD *result; // eax

  *(_DWORD *)(a2 + 176) = 0;
  *(_DWORD *)(a2 + 172) = 0;
  *(_DWORD *)(a2 + 168) = 0;
  *(_DWORD *)(a2 + 164) = 0;
  *(_DWORD *)(a2 + 160) = 0;
  *(_DWORD *)(a2 + 156) = 0;
  *(_WORD *)(a2 + 188) = __CS__;
  *(_WORD *)(a2 + 152) = __DS__;
  *(_WORD *)(a2 + 148) = __ES__;
  *(_WORD *)(a2 + 144) = __FS__;
  *(_WORD *)(a2 + 140) = __GS__;
  *(_WORD *)(a2 + 200) = __SS__;
  v3 = __readeflags();
  *(_DWORD *)(a2 + 192) = v3;
  *(_DWORD *)(a2 + 184) = a1[1];
  *(_DWORD *)(a2 + 180) = *a1;
  result = a1 + 2;
  *(_DWORD *)(a2 + 196) = a1 + 2;
  *(_DWORD *)a2 = 65543;
  return result;
}

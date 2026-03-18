/*
 * XREFs of ??0CFrameInfo@@QEAA@XZ @ 0x1800EF290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CFrameInfo *__fastcall CFrameInfo::CFrameInfo(CFrameInfo *this)
{
  LARGE_INTEGER v1; // kr18_8
  CFrameInfo *result; // rax

  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_BYTE *)this + 224) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 120) = 0;
  *((_BYTE *)this + 242) = 0;
  v1 = g_qpcFrequency;
  *((_BYTE *)this + 264) = 1;
  result = this;
  *((_QWORD *)this + 31) = v1.QuadPart / 60;
  *((_QWORD *)this + 32) = v1.QuadPart / 60;
  return result;
}
